int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    if(X >= V) return -1;
	    vector<int> dist(V,1e9);
	    queue<int> q;
	    q.push(0);
	    dist[0] = 0;
	    vector<bool> visited(V,false);
	    visited[0] = true;
	    while(!q.empty()){
	        int u = q.front();
	        q.pop();
	        for(auto x: adj[u]){
	            if(visited[x] == false){
	                dist[x] = dist[u] + 1;
	                q.push(x);
	                visited[x] = true;
	            }
	        }
	    }
	    if(dist[X] != 1e9){
	        return dist[X];
	    }else{
	        return -1;
	    }
}