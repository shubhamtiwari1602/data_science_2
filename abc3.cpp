#include <iostream>
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
ll gcd(ll a, ll b){
    if (b==0) return a;
    return gcd(b,a%b);
}
ll N =1e6+10;
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

void work() {
    ll n,m;
    string x,s;
    cin>>n>>m>>x>>s;
    


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while(t--){
        work();
    }
    // work();

    return 0;
}
