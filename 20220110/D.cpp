#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int n;
    cin >> n;
    while(n--){
        string str;
        int len,k;
        int alph[30] = {};
        for (int i = 0; i < 30;i++){
            alph[i] = -1;
        }
        int single_char = 0;
        int pair = 0;
        cin >> len >> k;
        cin >> str;
        for (int i = 0; i < len;i++){
            if(alph[str[i]-'a']==-1){
                alph[str[i]-'a'] = 0;
                continue;
            }
            if(!alph[str[i]-'a']){
                alph[str[i]-'a']++;
                pair++;
            }else{
                alph[str[i] - 'a']--;
            }
        }
        
        int shpr;
        int ch = pair % k;
        shpr = pair / k;
        for (int i = 0; i < 30;i++){
            if(alph[i]==0)
                single_char++;
        }
        single_char += ch * 2;
        if(single_char>=k){
            printf("%d\n", shpr * 2 + 1);
        }else{
            printf("%d\n", shpr * 2);
        }
        
        
    }
    return 0;
}