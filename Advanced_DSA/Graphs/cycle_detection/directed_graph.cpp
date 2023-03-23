#include<bits/stdc++.h>
using namespace std;

bool Recfunc(vector<int> adj[], bool visited[], int s, bool reStack[]) {
    visited[s] = true;
    reStack[s] = true;
    for (auto x: adj[s]) {
        if (visited[x] == false) {
            if (Recfunc(adj, visited, x, reStack) == true) {
                return true;
            }
        }
        else if (reStack[x] == true) {
            return true;
        }
    }
    return false;
}

bool DFS(vector<int>adj[], int V) {
    bool visited[V+1];
    for (int i = 0; i < V; i++) {
        visited[i] = false;
    }
    bool reStack[V+1];
    for (int i = 0; i < V; i++) {
        reStack[i] = false;
    }
    for (int i = 0; i < V; i++) {
        if (Recfunc(adj, visited, i, reStack) == true) {
            return true;
        }
    }
    return false;
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}

int main() { 
	int V=6;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,2,1); 
	addEdge(adj,2,3); 
	addEdge(adj,3,4); 
	addEdge(adj,4,5);
	addEdge(adj,5,3);

	if(DFS(adj,V))
	    cout<<"Cycle found";
	else
	    cout<<"No cycle found";

	return 0; 
} 