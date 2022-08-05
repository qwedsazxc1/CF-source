/* 
 * Author: D1stance
 * Time: 2022-02-23 18:10:02
 */

#include <iostream>
#include <set>
#include <cmath>
#include <algorithm>

using namespace std;
typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;

#define MiruSort ios_base::sync_with_stdio(0); cin.tie(0);
#define mp make_pair
#define x first
#define y second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

const ld pi = atan2(0, -1);
int n, q;

struct node
{
    ll l, r;
    mutable ll v;
    node(ll l, ll r = -1, ll v = 0) : l(l), r(r), v(v) {}
    bool operator<(const node &o) const {return l<o.l;}
};

set<node> tree;
auto split(ll pos)
{
    auto it = tree.lower_bound(node(pos, 0, 0));
    if (it != tree.end() && it->l == pos)
        return it;
    it--;
    ll l = it->l, r = it->r, v = it->v;
    tree.erase(it);
    tree.insert(node(l, pos - 1, v));
    return tree.insert(node(pos, r, v)).first;
}

void assign(ll l, ll r, ll v)
{
    auto end = split(r + 1), begin = split(l);
    tree.erase(begin, end);
    tree.insert(node(l, r, v));
}

void add(ll l, ll r, ll v)
{
    auto end = split(r + 1);
    for (auto it = split(l); it != end; it++)
        it->v += v;
}

ll sum(ll l, ll r)
{
    ll tot = 0;
    auto end = split(r + 1);
    for(auto it = split(l); it != end; it++)
        tot += it->v;
    return tot;
}

signed main()
{
    MiruSort
    cin >> n >> q;
    tree.insert(node(1, n));
    while(q--)
    {
        int t, l, r, x;
        cin >> t;
        if(t == 1)
        {
            cin >> x;
            int check = sum(x, x);
            if(check < 0)
                cout << "NO\n";
            else if(check > 0)
                cout << "YES\n";
            else
                cout << "N/A\n";
        }
        else
        {
            cin >> l >> r >> x;
            if(x == 1)
                add(l, r, 1);
            else
                add(l, r, -200);
        }
    }
    return 0;
}