//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
class Solution{
public:
    Node* deleteMid(Node* head)
    {
        // If the list is empty or has only one node, return null (delete the node)
        if (head == nullptr || head->next == nullptr)
            return nullptr;

        // Initialize pointers for finding the middle
        Node* slow = head;
        Node* fast = head;
        Node* prev = nullptr; // To keep track of the node before the middle node

        // Move fast by two steps and slow by one step to find the middle node
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }

        // Slow is now pointing to the middle node, prev is the node before slow
        if (prev != nullptr) {
            prev->next = slow->next;
            delete slow; // Delete the middle node
        }

        return head;
    }
};


//{ Driver Code Starts.



void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		Solution obj;
		head = obj.deleteMid(head);
		printList(head); 
	}
	return 0; 
} 



// } Driver Code Ends