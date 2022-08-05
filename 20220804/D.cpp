#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

#define MOD 998244353 
using namespace std;
using ll = long long;
using ld = long double;

void new_column(int &new_columns){
    if (new_columns == 3){
        new_columns = 0;
        return;
    }

    new_columns += 1;
}

int last_column(int now){
    if (now == 0)
        return 3;

    return now - 1;
}

int last_two_column(int now){
    if (now < 2)
        now += 4;
    
    return now - 2;
}

int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    
    long long dp[n][4];

    // init
    for (int i = 0; i < n; i++){
        dp[i][0] = 0;
        dp[i][1] = 0;
        dp[i][2] = 0;
        dp[i][3] = 0;
    }

    for (int i = 0; i < n; i++){
        if ((i + 1) % k == 0)
            dp[i][1] = 1;
    }

    int j = k + 1;
    int sum = k + j;
    
    int new_columns = 1;

    while (sum <= n){
        // for (int i = 0; i < n; i++){
        //     printf("%d ", dp[i][new_columns]);
        // }
        // printf("\n");
        new_column(new_columns);
        for (int l = 0; l < n; l++){
            if (l >= sum - 1 && l >= j)
                if (dp[l - j][new_columns] < dp[l - j][last_two_column(new_columns)])
                    dp[l][new_columns] = (dp[l - j][new_columns] + MOD - dp[l - j][last_two_column(new_columns)] + dp[l][last_column(new_columns)]) % MOD;
                else
                    dp[l][new_columns] = (dp[l - j][new_columns] - dp[l - j][last_two_column(new_columns)] + dp[l][last_column(new_columns)]) % MOD;
            else
                dp[l][new_columns] = dp[l][last_column(new_columns)];
        }
        sum += ++j;
    }

    for (int i = 0; i < n; i++){
        printf("%lld ", dp[i][new_columns]);
    }
    return 0;
}