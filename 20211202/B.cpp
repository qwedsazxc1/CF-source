#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        int t;
        cin >> t;
        int a[t];
        for (int j = 0; j < t;j++){
            cin >> a[j];
        }
        sort(a, a + t);
        int time =  t / 2;
        for (int j = 0; j < time;j++){
            cout << a[t-1] <<" "<< a[0] << endl;
            t--;
        }
    }
}