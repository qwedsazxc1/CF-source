#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int start, end;
        scanf("%d%d", &start, &end);
        int length = 0;
        int length2 = 0;
        int ans = 0;
        int en = end;
        int st = start;
        while(end){
            length++;
            end /= 2;
        }
        while(start){
            length2++;
            start /= 2;
        }
        int be;
        be = pow(2, length2);
        for (int i = st; i <= en; i++)
        {
            if((be & i )== 0)
                ans++;
        }
        if((en-st)/2!=0)
            printf("%d\n", min(ans,(en-st)/2));
        else{
            printf("%d\n", ans);
        }
    }
    return 0;
}