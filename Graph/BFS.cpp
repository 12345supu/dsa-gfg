vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        bool visited[V+1] = {false};
        queue<int> q;
        visited[0] = true;
        q.push(0);
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            ans.push_back(u);
            for(int v : adj[u])
            {
                if(visited[v] == false)
                {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        return ans;
        // Code here
    }
