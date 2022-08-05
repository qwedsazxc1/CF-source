#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
bool cmp(char a, char b){
    if(a=='b'&&b=='c')
        return false;
    else if(a=='c'&&b=='b'){
        return true;
    }
    else{
        return a < b;
    }
}
void solved(){
    string str,strcmp;
    cin >> str >> strcmp;
    int check = 0 ;
    for (int i = 0; i < str.length();i++){
        if(str[i]=='a')
            check = 1;
    }
    if (strcmp == "abc" && check){
        sort(str.begin(), str.end(), cmp);
    }else{
        sort(str.begin(), str.end());
    }  
    cout << str << '\n';
}

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        solved();
    }
    return 0;
}