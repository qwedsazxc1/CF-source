#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
const int maxn=100005;
int a[maxn],b[maxn];
int n;
int main(){
    int T;
    cin>>T;
    while(T--){
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        cin>>n;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            if(t<=n && a[t]==0) a[t]=1;
            else if(t<=2*n){
                b[(t+1)/2-1]++;
            }
            else b[n]++;
        }
        int la=0;
        int ans=0;
        for(int i=1;i<=n;i++){
            if(!a[i]){
                la--;
                ans++;
            }
            if(b[i]){
                la=min(0,la+b[i]);
            }
        }
        if(la>=0){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}