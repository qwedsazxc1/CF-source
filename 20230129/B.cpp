#include <iostream>
#include <map>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        map<int, int> m;
        scanf("%d", &n);
        int ans = 0, temp = 1;
        for (int i = 2; i * i <= n; i++){
            int count = 0;
            while (n % i == 0){
                count++;
                n /= i;
            }
            if (count >= 1)
                m[i] = count;
        }
        if (n != 1)
            m[n] = 1;
        while (!m.empty()){
            int temp = 1, flag = 0;
            for (auto &x: m){
                if (x.second != 0){
                    flag = 1;
                }
                else
                    continue;
                x.second -= 1;
                temp *= x.first;
                
            }
            if (flag == 0){
                break;
            }
            ans += temp;
        }
        printf("%d\n", ans);
    }
}