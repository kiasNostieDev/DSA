//
// Created by kiasnostie on 07/01/21.
//

#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int, int>> adj[], int u, int v, int wt){
    adj[u].emplace_back(make_pair(v, wt));
    adj[v].emplace_back(make_pair(u, wt));
}

void printAdj(vector<pair<int,int>> adj[], int V){
    int v,w;
    for(int u=0;u<V;u++){
        cout<<"Node"<<u<<"Makes edge with\n ";
        for(auto & it : adj[u]){
            v = it.first;
            w = it.second;
            cout<<"\t Node "<<v<<"with weight "<<w<<endl;
        }
        cout<<endl;
    }
}

int main(){
    int V = 5;
    vector<pair<int,int>> adj[V];
    addEdge(adj, 1, 2, 10);
    addEdge(adj, 2, 3, 10);
    addEdge(adj, 3, 4, 10);
    addEdge(adj, 4, 5, 10);
    addEdge(adj, 5, 6, 10);
    printAdj(adj, V);
}