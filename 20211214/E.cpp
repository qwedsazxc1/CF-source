#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
typedef long long int ll;
int main() 
{
    int t;
    cin >> t;
    while(t--){
      ll n;
      cin >> n;
      ll a[n],sum = 0;
      for(int i = 0;i < n;i++){
        cin >> a[i];
        sum += a[i];
      }
      ll k = (n*(n+1))/2;
      if(sum%k)
      cout << "NO\n";
      else if(n == 1){
        cout << "YES\n" << a[0] << "\n";
      }
      else{
        sum /= k;
        ll ans[n];
        bool flag = true;
        for(int i = 0;i < n;i++){
          if(!i){
            if((sum+a[n-1]-a[0])%n || sum+a[n-1]-a[0] <= 0){
              flag = false;
              // cout << "k";
              break;
            }
            ans[i] = (sum+a[n-1]-a[0])/n;
          }else{
            if((sum+a[i-1]-a[i])%n || sum+a[i-1]-a[i] <= 0){
            flag = false;
            break;
          }
          ans[i] = (sum+a[i-1]-a[i])/n;
          }
          
        }
        if(flag){
          cout << "YES\n";
          for(int i = 0;i < n;i++)
          cout << ans[i] << " ";
          cout << "\n";
        }else
        cout << "NO\n";
      }
    }
    return 0;
}