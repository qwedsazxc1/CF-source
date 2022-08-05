#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
using ll = long long;
using ld = long double;
void *reve(char * str, int length){
    for (int i = 0; i < length / 2;i++){
        swap(str[i], str[length - 1 - i]);
    }
    return str;
}
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int length, operation;
        scanf("%d%d", &length, &operation);
        char str[length + 10];
        scanf("%s", str);
        if(operation == 0){
            printf("1\n");
            continue;
        }
        char rev[length + 10];
        strcpy(rev, str);
        reve(str, length);
        if(strcmp(str, rev) == 0)
            printf("1\n");
        else{
            printf("2\n");
        }
    }
    return 0;
}