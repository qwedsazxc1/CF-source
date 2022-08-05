#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        string str;
        char ans[1000000];
        cin >> str;
        ans[0] = str[0];
        int check = 0;
        for (int i = 1; i < t;i++){
            if(str[i]>ans[i-1]){
                ans[i] = '\0';
                break;
            }
            if(str[i]==ans[i-1]){
                if(check){
                    ans[i] = str[i - 1];
                }else{
                    ans[i] = '\0';
                    break;
                }
            }
            if(str[i]<ans[i-1]){
                ans[i] = str[i];
                check = 1;
            }
        }
        cout << ans;
        reverse(ans, ans + strlen(ans));
        cout << ans << "\n";
    }
    return 0;
}