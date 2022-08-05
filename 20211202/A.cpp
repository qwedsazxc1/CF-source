#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][2][2];
    for (int i = 0; i < n;i++){
        cin >> arr[i][0][0] >> arr[i][0][1] >> arr[i][1][0] >> arr[i][1][1];
        int re = arr[i][0][0];
        int first_n_e = 0;
        while(re!=0){
            first_n_e++;
            re /= 10;
        }
        re = arr[i][1][0];
        int second_n_e = 0;
        while(re!=0){
            second_n_e++;
            re /= 10;
        }
        int first_e = arr[i][0][1] + first_n_e;
        int second_e = arr[i][1][1] + second_n_e;
        if(first_e>second_e){
            printf(">\n");
            continue;
        }
        if(second_e>first_e){
            printf("<\n");
            continue;
        }
        double first = (double)arr[i][0][0] / double(pow(10,first_n_e));
        double second = (double)arr[i][1][0] / double(pow(10,second_n_e));
        if(first-second<0.000000001&&first-second>-0.000000001){
            printf("=\n");
            continue;
        }
        if(first>second){
            printf(">\n");
            continue;
        }
        if(second>first){
            printf("<\n");
            continue;
        }
        printf("=\n");
    }
        return 0;
}