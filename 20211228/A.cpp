#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int row, column, clx, cly, dx, dy;
        scanf("%d%d%d%d%d%d", &row, &column, &clx, &cly, &dx, &dy);
        int deltax = 1, deltay = 1;
        ll ans = 0;
        while(clx!=dx&&cly!=dy){
            if(clx==row){
                deltax = -1;
            }
            if(cly==column){
                deltay = -1;
            }
            if(clx==1){
                deltax = 1;
            }
            if(cly==1){
                deltay = 1;
            }
            clx += deltax;
            cly += deltay;
            ans++;

        }
        printf("%lld\n", ans);
    }
    return 0;
}