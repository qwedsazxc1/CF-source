#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b){
    if(a%b==0){
        return b;
    }
    return gcd(b, a % b);
}
int main()
{
    int n;
    scanf("%d", &n);
    while(n--){
        ll ans = 0;
        int t;
        scanf("%d", &t);
        ll array[t];
        for (int i = 0; i < t;i++){
            scanf("%lld", &array[i]);
        }
        if(t==2){
            if(array[0]>array[1]){
                ans = array[0];
            }
            if(array[0]<array[1]){
                ans = array[1];
            }
        }
        ll gcdans ,gcdans2;
        for (int i = 0; i < t;i+=2){
            if(i==0){
                gcdans = gcd(array[i+2], array[i]);
            }
            gcdans = gcd(gcdans, array[i]);
        }
        int check1 = 0;
        for (int i = 1; i < t;i+=2){
            if(array[i]%gcdans==0){
                check1 = 1;
            }
        }
        for (int i = 1; i < t;i+=2){
            if(i == 1 && i + 2 < t){
                gcdans2 = gcd(array[i+2], array[i]);
            }
            if(t==3){
                gcdans2 = array[1];
                break;
            }
            gcdans2 = gcd(gcdans2, array[i]);
        }
        int check2 = 0;
        for (int i = 0; i < t;i+=2){
            if(array[i]%gcdans2==0){
                check2 = 1;
            }
        }
        if(!(check1))
            ans = gcdans;
        else if(!check2)
            ans = gcdans2;

        printf("%lld\n", ans);
    }
    return 0;
}