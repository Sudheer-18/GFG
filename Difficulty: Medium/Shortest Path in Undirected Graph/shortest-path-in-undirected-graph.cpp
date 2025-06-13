class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        // code here
         int V = adj.size();
        queue<pair<int,int>> q;
        vector<int> visited(V, 0), dist(V, -1);
        q.push({src, 0});
        visited[src] = 1;
        while (!q.empty()) {
            int N = q.size();
            int d = q.front().second;
            while (N--) {
                int u = q.front().first;
                dist[u]=d;
                q.pop();
                for (auto v: adj[u]) {
                    if (!visited[v]) {
                        visited[v]=1;
                        q.push({v,d+1});
                    }
                }
            }
        }
        return dist;
    }
};