#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int t;
        scanf("%d", &t);
        vector<int> v;
        vector<int> ans;
        int max = -1;
        
        for (int i = 0; i < t; i++){
            int input;
            scanf("%d", &input);
            v.push_back(input);
            if(max<input)
                max = input;
        }
        int sum[max + 1];
        memset(sum, 0, sizeof(sum));
        for(auto x:v){
            sum[x]++;
        }
        while(!(v.empty())){
            int a[max + 1];
            memset(a, 0, sizeof(a));
            int ch = 0;
            int size = v.size();
            int c = 0;
            int in = 0;
            while (0 < size)
            {
                if(ch)
                    break;
                a[v[0]]++;
                sum[v[0]]--;
                v.erase(v.begin());
                
                size--;
                c++;
                if(c>=max)
                    for (int i = in; i < max + 1; i++){
                        if(a[i]==0)
                            break;
                        if(i==max)
                            ch = 1;
                        in++;
                    }
            }
            if(ch){
                ans.push_back(max + 1);
                for (int i = max; i >= 0;i--){
                    if(sum[i]!=0){
                        max = i;
                        break;
                    }
                }
            }else{
                ans.push_back(in);
            }
        }
        printf("%d\n", ans.size());
        for(auto x:ans){
            printf("%d ", x);
        }
        printf("\n");
    }
    return 0;
}