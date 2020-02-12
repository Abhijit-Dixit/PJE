#include <bits/stdc++.h>
using namespace std;
#define ll          long long
#define pb          push_back
#define eb          emplace_back
#define pii         pair<int,int>
#define pll         pair<long,long>
#define vi          vector<int>
#define vll         vector<ll>
#define vii         vector<pii>
#define Mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define rall(a)      (a).rbegin(),(a).rend()
#define ff          first
#define ss          second
#define sz(x)       (int)x.size()
#define endl        '\n'
#define mod        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define rem(i,a,b)  for(int i=a;i>b;i--)
#define mp(a,b)     make_pair(a,b)
#define INF         numeric_limits<ll>::max();
#define NINF        numeric_limits<ll>::min();
#define vvi(a,b,name)    vector<vector<int>> name(a,vector<int>(b,-1))



void solve(){
    int n;cin>>n;
    vector<int> v;
    v.pb(1);
    rep(i,1,n+1){
        int carry=0;
        int res;
        rep(j,0,v.size()){
            res=carry+v[j]*i;
            v[j]=res%10;
            carry=res/10;
        }
        while(carry!=0){
            v.pb(carry%10);
            carry/=10;
        }
    }
    ll ans=0;
    for(auto u:v){
        ans+=u;
    }
    cout<<ans<<endl;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
