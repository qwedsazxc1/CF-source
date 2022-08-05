#include <iostream>
#include <algorithm>
#include <vector>
#include<stack>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    while(n--){
        stack<int> stk;
        stack<int> stk2;
        int t;
        cin >> t;
        int arr[t];
        for (int i = 0; i < t;i++){
            cin >> arr[i];
        }
        string str;
        cin >> str;
        int a = 1;
        for (int i = 0; i < t; i++){
            if(str[i]=='0'){
                a++;
            }
        }
        for (int i = 0; i < t; i++){
            if(str[i]=='0'&&arr[i]>=a){
                stk.push(i);
            }
            if(str[i]=='1'&&arr[i]<a){
                stk2.push(i);
            }
        }
        while(!stk.empty()){
            swap(arr[stk.top()], arr[stk2.top()]);
            stk.pop();
            stk2.pop();
        }
        for (int i = 0; i < t;i++){
            cout << arr[i] << " ";
        }
            cout << '\n';
    }
    return 0;
}