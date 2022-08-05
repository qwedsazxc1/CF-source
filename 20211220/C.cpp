#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        ll n,input;
        scanf("%lld%lld", &n, &input);
        vector<int> array;
        int check = 1;
        int ch = 0;
        int c = 0;
        while(input){
            if(n%10<=input%10){
                array.push_back(input % 10 - n % 10) ;
                n /= 10;
                input /= 10;
        
            }else if(input%100>n%10){
                array.push_back(input % 100 - n % 10) ;
                input /= 100;
                n /= 10;
     
            }else{
                printf("-1\n");
                c = 1;
                break;
            }
            
        }
        if(c)
            continue;

        if(n!=0){
            printf("-1\n");
            continue;
        }
        reverse(array.begin(), array.end());
        for (int i = 0; i < array.size();i++){
            if(array[i]>=10){
                printf("-1\n");
                ch = 1;
                break;
            }
        }
        if(ch)
            continue;
        for (int i = 0; i < array.size();i++){
            if(check && array[i]==0){
                continue;
            }
            if(array[i]!=0)
                check = 0;
            printf("%d", array[i]);
        }
        printf("\n");
    }
    return 0;
}