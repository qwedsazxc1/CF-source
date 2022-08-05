#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int t;
        scanf("%d", &t);
        int array[t];
        for (int i = 0; i < t;i++){
            scanf("%d", &array[i]);
        }
        sort(array, array + t);
        int ch = 1;
        for (int i = 0; i <= t;i++){
            if(i==0){
                int f = 0;
                for (int j = 0; j < t;j++){
                    if(array[j]==0){
                        f++;
                    }
                }
                printf("%d ", f);
            }else
            if(ch){
                if(array[i]>i){
                    int f = 0;
                    for (int j = 0; j < t;j++){
                        if(array[j]==i){
                            f++;
                        }
                    }
                    printf("%d ", f);
                    ch = 0;
                }else{
                    if(i>array[i+1]){
                        int sum = 0;
                        int max = 0;
                        for (int j = 0; j <= i;j++){
                            if (array[j] > max){
                                max = array[j];
                            }
                            else
                            {
                                sum += max - array[j] + 1;
                                max += 1;
                            }
                        }
                        printf("%d ", sum);
                    }else{
                        int f = 0;
                        for (int j = 0; j < t;j++){
                            if(array[j]==i){
                                f++;
                            }
                        }
                        printf("%d ", f);
                    }
                }
            }else{
                printf("-1 ");
            }
        }
        printf("\n");
    }
}