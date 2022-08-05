#include <iostream>
using namespace std;

int ask(int i)
{
    int x;
    cout <<"? "<<i<<endl;
    cin >> x;
    return x;
}

int main() {
	int t;
	cin >> t;
	while(t-->0)
	{
	    int n;
	    cin >> n;
	    int ans[n+1];
	    for(int i=0;i<=n;i++)
	    {
	        ans[i]=-1;
	    }
	    for(int i=1;i<=n;i++)
	    {
	        if(ans[i]!=-1)
	        {
	            continue;
	        }
	        int p = ask(i);
	        int x = ask(i);
	        int pt = x;
	        ans[p]=x;
	        while(p!=x)
	        {
	            x = ask(i);
	            ans[pt]=x;
	            pt = x;
	        }
	    }
	    cout << "! ";
	    for(int i=1;i<=n;i++)
	    {
	        cout << ans[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}