#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    char str[10];
    scanf("%s", str);
    int num = str[6] - '0';
    if(num&1){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}