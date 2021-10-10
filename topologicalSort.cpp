	void helper(int v, vector<bool> &visited, stack<int> &s, vector<int> adj[]){
	    visited[v] = true;
	    for(auto u:adj[v]){
	        if(!visited[u]){
	            helper(u,visited,s,adj);
	        }
	    }
	    s.push(v);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    stack<int> s;
	    vector<int> res;
	    vector<bool> visited(V,false);
	    for(int i = 0; i < V; i++){
	        if(!visited[i]){
	            helper(i,visited,s,adj);
	        }
	    }
	    while(!s.empty()){
	        res.push_back(s.top());
	        s.pop();
	    }
	    return res;
	}