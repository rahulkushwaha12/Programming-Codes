#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

#define pb push_back
#define MAX 10005

using namespace std;

int vis[MAX],f=0;
vector<int> adj[MAX];

void dfs(int v, int parent){
    int i,j;
    vis[v] = 1;
    for(i=0;i<adj[v].size();i++){
        if(vis[adj[v][i]] && adj[v][i]!=parent) {f=1; return;}
        if(!vis[adj[v][i]]) dfs(adj[v][i],v);
    }
}

int main(){
    int n,m,i,x,y,parent=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%d%d",&x,&y);
        if(x==1 && !parent) parent = y;
        if(y==1 && !parent) parent = x;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    dfs(1,parent);
    for(i=1;i<=n;i++) if(!vis[i]) {f=1;break;}
    if(!f) printf("YES\n");
    else printf("NO\n");
}
