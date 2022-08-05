#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <utility>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        map<int, int> m;
        int t, ini;
        scanf("%d%d", &t, &ini);
        int f[t];
        int s[t];
        for (int i = 0; i < t;i++){
            scanf("%d", &f[i]);
        }
        for (int i = 0; i < t;i++){
            scanf("%d", &s[i]);
        }
        for (int i = 0; i < t;i++){
            int max = f[i];
            for (int j = i + 1; j < t;j++){
                if(max > f[j]){
                    max = f[j];
                    swap(f[j], f[i]);
                    swap(s[j], s[i]);
                }
            }
        }
        for (int i = 0; i < t; i++){
            if(ini>=f[i]){
                ini += s[i];
            }else{
                break;
            }
        }
            printf("%d\n", ini);
    }
    return 0;
}