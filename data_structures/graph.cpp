#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> BFS(int n, vector<vector<int>> adj) {
    int visited[n+1] = {0};
    queue<int> q;
    vector<int> bfs;
    q.push(1); // first node
    bfs.push_back(1);
    while(!q.empty()) {
        int node = q.front();
        visited[node] = 1;
        for(int edge: adj[node]) {
            if(!visited[edge]){
                visited[edge] = 1;
                q.push(edge);
                bfs.push_back(edge);
            }
        }
        q.pop();
    }
    return bfs;
}

int main() {

    // we will create graph of n nodes and m edges;
    int n = 5, m = 6;
    vector<vector<int>> adj(n+1);
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

    // for(int i=0; i<adj.size(); i++) {
    //     for(int j=0; j<adj[i].size(); j++) {
    //         cout<<adj[i][j]<<" ";
    //     }
    // }

    return 0;
}