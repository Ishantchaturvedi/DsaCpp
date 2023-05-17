#include<iostream>
using namespace std;
#include<set>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<algorithm>
#include<string>

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
 
const int N = 1e3+2;

int lcs(string &s1, string &s2, int n, int m)
{
    if(n == 0 || m == 0)
       return 0;
    
    if(s1[n-1] == s2[m-1])
        return 1 + lcs(s1,s2,n-1,m-1);
    else
    {
        return max(lcs(s1,s2,n,m-1), lcs(s1,s2,n-1,m));
    }
}

signed main(){
    
    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.size(), m = s2.size();

    cout << lcs(s1, s2, n, m) << endl;
    return 0;
}