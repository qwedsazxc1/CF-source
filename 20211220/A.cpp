#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        string s;
        cin >> s;
        int check = 1;
        int len = s.length();
        if(len&1){
            printf("NO\n");
            continue;
        }
        for (int i = 0; i < len / 2; i++){
            if(s[i]!=s[len/2+i]){
                check = 0;
                break;
            }
        }
        if(check){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}