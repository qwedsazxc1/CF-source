#include <iostream>
#include <set>
#include <queue>

using namespace std;

set<string> v;

inline string operation(string a, char b){
    a+=b;
    while(a.back() == '0') a.pop_back();
    for(int i = 0; i < a.size()/2; ++i) swap(a[i],a[a.size()-i-1]);
    return a;
}

bool bfs(string x, string y){
    queue<string> nodes;
    nodes.push(x);
    v.insert(x);
    string z;
    while(!nodes.empty()){
        x = nodes.front();

        if(x == y) return true;

        nodes.pop();
        z = operation(x,'0');
        if(z.size() < 70 && v.find(z) == v.end()) v.insert(z), nodes.push(z);

        z = operation(x,'1');
        if(z.size() < 70 && v.find(z) == v.end()) v.insert(z), nodes.push(z);
    }
    return false;
}

string to_bin(long long x){
    string s;
    while(x){
        s+=(x&1)+'0';
        x>>=1;
    }

    for(int i = 0; i < s.size()/2; ++i) swap(s[i],s[s.size()-i-1]);

    return s;
}

int main()
{
    long long x,y;
    cin>>x>>y;
    if(bfs(to_bin(x),to_bin(y))) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
