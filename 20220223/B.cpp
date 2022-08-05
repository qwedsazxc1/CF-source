#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int t;
        scanf("%d", &t);
        int arr[t];
        map<int, int> m;
        for (int i = 0; i < t; i++){
            scanf("%d", &arr[i]);
            m[arr[i]]++;
        }
        int num = m.size();
        for (int i = 0; i < num; i++){
            printf("%d ", num);
        }
        int tmp = num;
        for (int i = 0; i < t - tmp; i++){
            num++;
            printf("%d ", num);
        }
        printf("\n");
    }
    return 0;
}