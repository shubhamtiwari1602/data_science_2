#include <iostream>
#include <vector>
#include <climits>
#include <queue>
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
    ll  n;
    string a,b;
    
    cin>>n>>a>>b;
    ll aodd1=0,aeven1=0,aodd0=0,aeven0=0;
    ll bodd1=0,beven1=0,bodd0=0,beven0=0;
    for (ll i=0; i<n; i++){
        if (a[i]=='0'&& i%2==0){
            // even0
            aeven0++;
        }
        else if (a[i]=='1'&& i%2==0){
            // even1
            aeven1++;
        }
        else if (a[i]=='0'&& i%2==1){
            // odd0
            aodd0++;
        }
        else if (a[i]=='1'&& i%2==1){
            // odd1
            aodd1++;
        }

    }
    for (ll i=0; i<n; i++){
        if (b[i]=='0'&& i%2==0){
            // even0
            beven0++;
        }
        else if (b[i]=='1'&& i%2==0){
            // even1
            beven1++;
        }
        else if (b[i]=='0'&& i%2==1){
            // odd0
            bodd0++;
        }
        else if (b[i]=='1'&& i%2==1){
            // odd1
            bodd1++;
        }

    }
    // check for dia - zero of 1
    bool ans = true;
    if (aeven0 + bodd0 < aeven1) {
        ans = false;
    }
    if (aodd0 + beven0 < aodd1) {
        ans = false;
    }
    
    // Output the result: "YES" if transformation is possible, "NO" otherwise.
    cout << (ans ? "YES" : "NO") << '\n';


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
