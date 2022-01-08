#include<bits/stdc++.h>
using namespace std; 
vector<vector<int>> adj;
void addEdge(int x,int y){
    adj[x][y] = 1;
   adj[y][x] = 1;   }
void dfs(int start, vector<bool>& visited){
    cout << start << " ";
    visited[start] = true;
    for (int i = 0; i < adj[start].size(); i++) {
        if (adj[start][i] == 1 && (!visited[i])) {
            dfs(i, visited);        }    }}
void bfs(int start){    
    vector<bool> visited(adj.size(), false);
    vector<int> q;
    q.push_back(start);
    visited[start] = true;  
    int vis;
    while (!q.empty()) {
        vis = q[0];
        cout << vis << " ";
        q.erase(q.begin());
        for (int i = 0; i < adj[vis].size(); i++) {
           if (adj[vis][i] == 1 && (!visited[i])) {
                q.push_back(i);
                visited[i] = true;            }        }    }}  
int main(){
  int v = 5; 
  adj= vector<vector<int>>(v,vector<int>(v,0)); 
  addEdge(0,1);
  addEdge(0,2);
  addEdge(1,3);
  addEdge(1,2); 
  addEdge(2,3); 
  addEdge(3,4);
  addEdge(2,4);
  cout<<"BFS = \n";
    bfs(0);
    cout<<"\n";
     cout<<"DFS = \n";
   vector<bool> visited(v, false);
  dfs(0, visited);}

f
