#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
using ll = long long;
using ld = long double;
bool cmp(int a, int b){
    if(a > b)
        return true;

    return false;
}
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int t;
        scanf("%d", &t);
        int arr[t];
        vector<int> v;
        for (int i = 0; i < t; i++){
            scanf("%d", &arr[i]);
            v.push_back(arr[i]);
        }
        sort(v.begin(), v.end(), cmp);
        while(t > 1){
            if(v[t - 2] - v[t - 1] > 1){

            } 
        }
        
    }
    return 0;
}