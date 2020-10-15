#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;
bool visited[6];

void topo_dfs(int  k,int n, vector<vector<int>> adj_list ){
    visited[k] = true;
    for(size_t i=1;i<n;i++){
        if ( !visited[i] && adj_list[k][i] ){
          topo_dfs(i,n,adj_list);
        }
      }
    v.push_back(k);

}

main(){
  vector<vector<int>> adj_list={{0,0,0,0,0,0},
                                {0,0,1,1,0,0},
                                {0,0,0,1,1,0},
                                {0,0,0,0,1,1},
                                {0,0,0,0,0,0},
                                {0,0,0,0,0,0}};
    topo_dfs(0,adj_list.size(),adj_list);
    reverse(v.begin(),v.end());
  for(auto i:v){
    cout<<i<<' ';
  }
}
