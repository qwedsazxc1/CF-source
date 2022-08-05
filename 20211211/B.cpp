#include<iostream>
#include<cmath>

using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n;i++){
        int t, a, b;
        scanf("%d%d%d", &t, &a, &b);
        if(t%2){
            if(a>b){
                if(a-b>1){
                    printf("-1\n");
                    continue;
                }
            }else{
                if(b-a>1){
                    printf("-1\n");
                    continue;
                }         
            }
            if(a>t/2){
                printf("-1\n");
                continue;
            }     
            if(b>t/2){
                printf("-1\n");
                continue;
            }
            if(a+b>t-2){
                printf("-1\n");
                continue;
            }
                
        }else{
            if(a>b){
                if(a-b>1){
                    printf("-1\n");
                    continue;
                }
            }else{
                if(b-a>1){
                    printf("-1\n");
                    continue;
                }               
            }
            if(a>(t-2)/2){
                printf("-1\n");
                continue;
            }     
            if(b>(t-2)/2){
                printf("-1\n");
                continue;
            }      
        }

        int array[t];
        for (int j = 0; j < t;j++){
            array[j] = j +1;
        }

        if(a==b){
            int k = 1;
            for (int j = 0; j < a;j++){
                swap(&array[k], &array[k + 1]);
                k+=2;
            }
        }else
        if(t%2){
            if(a>b){
                int k = 1;
                for (int j = 0; j < b;j++){
                    swap(&array[k], &array[k + 1]);
                    k += 2;
                }
                swap(&array[t - 1], &array[t - 2]);
            }
            else{
                int k = t-2;
                for (int j = 0; j < a;j++){
                    swap(&array[k], &array[k - 1]);
                    k -= 2;
                }
                swap(&array[0], &array[1]);
            }
        }else{
            if(a>b){
                int k = 1;
                for (int j = 0; j < b;j++){
                    swap(&array[k], &array[k + 1]);
                    k += 2;
                }
                swap(&array[t - 1], &array[t - 2]);
            }
            else{
                int k = t-2;
                for (int j = 0; j < a;j++){
                    swap(&array[k], &array[k - 1]);
                    k -= 2;
                }
                swap(&array[0], &array[1]);
            }
        }

        for (int j = 0; j < t;j++){
            printf("%d ", array[j]);
        }
        printf("\n");
    }
        return 0;
}