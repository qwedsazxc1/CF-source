#include <iostream>
using namespace std;
int times[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8, 4, 6, 2, 6, 4, 3, 3, 8, 3, 2, 7, 9, 5, 0, 2, 8, 8, 4, 1, 9, 7, 1};
int main(){
    long long t;
    cin >> t;
    for (int i = 0; i < t; i++){
        long long ans = 1, input;
        for (int j = 0; j < times[i]; j++){
            cin >> input;
            ans *= input;
        }
        cout << ans << "\n";
    }
    return 0;
}