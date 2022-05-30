// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to determine if graph can be coloured with at most M colours such
// that no two adjacent vertices of graph are coloured with same colour.

bool isValid(bool graph[101][101],int color[], int col,int v, int n){
     for (int k = 0; k < n; k++) {
        if (k != v && graph[k][v] == 1 && color[k] == col) {
          return false;
        }
  }
  return true;
}

bool solve(bool graph[101][101],int m,int n,int color[], int v){
    if(v==n){
        return true;
    }
    
    for(int i=1;i<=m;i++){
        if(isValid(graph,color,i,v,n)){
            color[v]=i;
            if(solve(graph,m,n,color,v+1)) return true;
            color[v]=0;
        }
    }
    
    return false;
}
bool graphColoring(bool graph[101][101], int m, int n) {
    
    int color[n] = {0};
    
    if(solve(graph,m,n,color,0)) return true;
    return false;
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends