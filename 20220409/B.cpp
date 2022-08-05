#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
using ll = long long;
using ld = long double;

int _DFS(int n, int v){
    if(n > 15)
        return 15;
    v = v % 32768;

    if(v == 0)
        return n;

    return min(_DFS(n + 1, v + 1), _DFS(n + 1, v * 2));
}

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int v;
        scanf("%d", &v);
        if(v == 0){
            printf("0\n");
            continue;
        }
        int arr[16];
        int ans1[16] = {};
        for (int i = 0; i < 16; i++){
            arr[i] = v + i;
            arr[i] %= 32768;
            if(arr[i] == 0){
                ans1[i] = i;
                continue;
            }

            int time = 0;
            while(!(arr[i] & 1) && arr[i] > 0){
                time++;
                arr[i] >>= 1;
            }
            ans1[i] = 15 - time + i;
        }
        sort(ans1, ans1 + 16);
        int ans = ans1[0];
        printf("%d\n", ans);
    }
    return 0;
}