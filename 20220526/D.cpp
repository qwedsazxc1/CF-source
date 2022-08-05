#include <bits/stdc++.h>
#define ll long long
#define rep(i, a, b) for(int i = (a); i <= (b); i++)
#define per(i, b, a) for(int i = (b); i >= (a); i--)
#define son(i, u, v) for(int i = p[u], v = e[i].v; i; v = e[i = e[i].nxt].v)
#define PB push_back
#define MP make_pair
using namespace std;
const int N = 2e5 + 5;
char s[N];
int a, b, c, d, b1[N], b2[N];
inline bool cmp(int x, int y){
	if((x & 1) == (y & 1)) return x < y;
	return (x & 1) < (y & 1);
}
int main(){
	int T; scanf("%d", &T);
	while(T--){
		scanf("%d%d%d%d%s", &a, &b, &c, &d, s+1);
		int n = strlen(s+1), n1 = 0, n2 = 0, s1 = 0, s2 = 0;
		rep(i, 1, n) s1 += (s[i] == 'A'), s2 += (s[i] == 'B');
		if(a + c + d != s1) { puts("NO"); continue; }
		if(b + c + d != s2) { puts("NO"); continue; }
		rep(i, 1, n){
			int r = i;
			while(r < n && s[r+1] != s[r]) ++r;
			s[i] == 'A' ? b1[++n1] = r-i+1 : b2[++n2] = r-i+1;
			i = r;
		}
		sort(b1+1, b1+n1+1, cmp), sort(b2+1, b2+n2+1, cmp);
		/*cout << n1 << endl;
		rep(i, 1, n1) cout << b1[i] << " "; cout << endl;
		cout << n2 << endl;
		rep(i, 1, n2) cout << b2[i] << " "; cout << endl; */
		rep(i, 1, n1) {
			int x = min(c, b1[i] / 2);
			c -= x, b1[i] -= x * 2;
		}
		rep(i, 1, n2) {
			int x = min(d, b2[i] / 2);
			d -= x, b2[i] -= x * 2;
		}
		rep(i, 1, n1) d -= min(d, (b1[i]-1) / 2);
		rep(i, 1, n2) c -= min(c, (b2[i]-1) / 2);
		puts(c + d ? "NO" : "YES"); 
	}
	return 0;
}
/*
1
1 3 3 10
BBABABABABBBABABABABABABAABABA
*/