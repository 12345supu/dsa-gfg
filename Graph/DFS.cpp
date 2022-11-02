vector<int> ans;
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        bool visited[V] = {false};
        DFSRecursion(adj, 0, visited);
        return ans;
        // Code here
    }
    void DFSRecursion(vector<int> adj[], int s, bool visited[])
    {
        visited[s] = true;
        ans.push_back(s);
        for(auto u: adj[s])
        {
            if(visited[u] == false)
            {
                DFSRecursion(adj, u, visited);
            }
        }
    }
