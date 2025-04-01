#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
#include <algorithm>
using namespace std;
typedef long long int ll;
ll mod = 1e9+7;
const ll N = 1e5+10;
ll gcd(ll a, ll b){
    if (b==0) return a;
    return gcd(b,a%b);
}

ll pw(ll a, ll b){
    if(b==0) return 1;
    if(b%2==0){
        // even
        int p = pw(a,b/2);
        return 1ll*p*p%mod;
    }
    else{
        // odd
        int p= pw(a, (b-1)/2);
        return 1ll*p*p%mod*a%mod;
    }
}
bool a[N],child[N];
vector<ll>adj[N];
ll n,k,ans;
vector<bool>visited(N,0);



void work() {
    cin>>n>>k;

    
    for (ll i=1; i<=n; i++){

        cin>>a[i];

    }
    for (ll i=1; i<=n-1; i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // dfs to find child nodes
    dfs1(1);    
    // reset visited to zero
    for (ll i=1; i<=n; i++){
        visited[i]=0;
    }
    ans=0;
    dfs2(1,0);// node, cnt
    cout<<ans<<'\n';
}






int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // ll t;
    // cin>>t;
    // while(t--){
    //     work();
    // }
    work();


    return 0;
}
