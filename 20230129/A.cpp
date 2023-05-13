#include <iostream>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int num;
        scanf("%d", &num);
        if ((num & 1)){
            printf("-1\n");
        
        }
        else{
            printf("1 %d\n", num / 2);
        }
        
    }
    return 0;
}