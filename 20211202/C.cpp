#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long int;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {       
        ll n,h;
        cin >> n >> h;
        ll w = n;
        vector<ll> v1,dis;
        v1.clear();dis.clear();
        dis.push_back(0);
        for(ll i = 0;i < n;i++){
            ll tmp;
            cin >> tmp;
            v1.push_back(tmp);
            if(i)dis.push_back(tmp - v1[i-1]);
        }
        dis.push_back(1e18+1);
        sort(dis.begin(),dis.end());
        ll ans = 0;
        for(ll i = 1;i <= n;i++){
            if(h < 0) break;
            if((dis[i] - dis[i - 1]) * w > h){
                ans += ((h + w - 1)/ w);
                break;
            }
            else{
                h -= (dis[i] - dis[i - 1]) * w;
                w--;
                ans += (dis[i] - dis[i - 1]);
            }
        }
        cout << ans <<'\n';
    }
    return 0;
}