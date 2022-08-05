#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<map>
#include<stack>
#include<queue>
#include<ctime>
#include<vector>
#include<set>
#include<cstdlib>
#include<utility>
using namespace std;
int n,a[500000+5],c[500000+5];
int vis[500000+5];
int lowbit(int x){return x&(-x);}
void modify(int x,int y)
{
    for (int i=x;i<=n;i+=lowbit(i))
        c[i]+=y;
}
int query(int x)
{
    int sum=0;
    for (int i=x;i>0;i-=lowbit(i))
        sum+=c[i];
    return sum;
}
int main()
{
    int T;
    scanf("%d",&T);
    while (T--)
    {
        int i,ans=0;
        scanf("%d",&n);
        for (i=1;i<=n;i++)
            c[i]=vis[i]=0;
        for (i=1;i<=n;i++)
            scanf("%d",&a[i]),vis[a[i]]++;
        bool flag=false;
        for (i=1;i<=n;i++)
            if (vis[i]>1)
                flag=true;
        if (flag)
        {
            printf("YES\n");
            continue;
        }
        for (i=1;i<=n;i++)
        {
            ans^=(i-1-query(a[i]));
            modify(a[i],1);
        }
        printf(ans&1?"NO\n":"YES\n");
    }
}
