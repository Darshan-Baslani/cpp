#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> BFS(int n, vector<vector<int>> adj) {
    int visited[n] = {0};
    visited[0] = 1;
    queue<int> q;
    q.push(0); 
    vector<int> bfs;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(int edge: adj[node]){
            if(!visited[edge]){
                q.push(edge);
                visited[edge] = 1;
            }
        }
    }
    return bfs;
}

int main() {

    // we will create graph of n nodes and m edges;
    int n = 5, m = 6;
    vector<vector<int>> adj;
    // manually creating edges
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(1);
    adj[2].push_back(4);
    adj[3].push_back(1);
    adj[3].push_back(4);
    adj[3].push_back(5);
    adj[4].push_back(2);
    adj[4].push_back(3);
    adj[4].push_back(5);
    adj[5].push_back(3);
    adj[5].push_back(4);

    vector<int> bfs = BFS(n, adj);
    for(int ele: bfs) {
        cout<<ele<<" ";
    }

    return 0;
}