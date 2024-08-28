//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
public:
    int sec = 0;
    unordered_map<Node*, Node*> pm;
    Node* target_node = nullptr;
    void dfs(Node* root, Node* parent, int target) {
        if (root == nullptr) return;
        if (root->data == target) {
            target_node = root;
        }
        if (parent != nullptr) {
            pm[root] = parent;
        }
        dfs(root->left, root, target);
        dfs(root->right, root, target);
    }
    int burnTree(Node* target_node) {
        queue<Node*> q;
        unordered_map<Node*, bool> visited;
        q.push(target_node);
        visited[target_node] = true;
        while (!q.empty()) {
            int size = q.size();
            bool ab = false;
            for (int i = 0; i < size; i++) {
                Node* current = q.front();
                q.pop();
                if (current->left && !visited[current->left]) {
                    visited[current->left] = true;
                    q.push(current->left);
                    ab = true;
                }
                if (current->right && !visited[current->right]) {
                    visited[current->right] = true;
                    q.push(current->right);
                    ab = true;
                }
                if (pm[current] && !visited[pm[current]]) {
                    visited[pm[current]] = true;
                    q.push(pm[current]);
                    ab = true;
                }
            }
            if (ab) {
                sec++;
            }
        }
        return sec;
    }

    int minTime(Node* root, int target) {
        if (root == nullptr) return 0;
        dfs(root, nullptr, target);
        return burnTree(target_node);
    }
};



//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends