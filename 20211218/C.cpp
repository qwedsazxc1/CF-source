#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long ll;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        ll len, max;
        ll rank;
        scanf("%lld%lld%lld", &len, &max, &rank);
        rank--;
        ll arr[len+5], index = 0;
        memset(arr, 0, sizeof(int) * len + 5);
        string s;
        cin >> s;
        ll cal = 0;
        for (int i = 0; i < len; i++){
            if(s[i]=='a'&&cal!=0){
                arr[index] = cal * max + 1;
                cal = 0;
                index++;
                arr[index] = -1;
                index++;
                continue;
            }
            if(s[i]=='a'){
                arr[index] = -1;
                index++;
                continue;
            }
            if(i==len-1){
                arr[index] = (cal+1) * max + 1;
                index++;
                break;
            }
            cal++;
        }
        string ans;
        ans.clear();
        for (ll i = index-1; i >= 0;i--){
            if (arr[i]==-1){
                ans.push_back('a');
                continue;
            }
            ll time = rank % arr[i];
            for (ll j = 0; j < time;j++){
                ans.push_back('b');
                
            }
            rank /= arr[i];
        }
        reverse(ans.begin(), ans.end());
        cout << ans << '\n';
    }
    return 0;
}