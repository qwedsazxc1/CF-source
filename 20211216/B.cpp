#include <iostream>
using namespace std;
typedef long long ll;
int gcd(int a,int b){
    if(a%b==0){
        return b;
    }else{
        return gcd(b, a % b);
    }
}
void solved(){
    ll input;
    cin >> input;
    if(input&1){
        if((input/2)&1){
            printf("%lld %lld 1\n", input / 2 + 2, input / 2 - 2);
          
        }else{
        printf("%lld %lld 1\n", input / 2 + 1, input / 2 - 1);
   
        }
    }
    else{
        printf("%lld %lld 1\n", input / 2, input / 2 - 1);
       
    }
}


int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        solved();
    }
    return 0;
}

