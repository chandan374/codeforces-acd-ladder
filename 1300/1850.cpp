#include <iostream> 
#include <queue>
#include<algorithm>
#include<unordered_map>
#include<math.h>
using namespace std;
long long int mo = 998244353;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
      int n;
      cin>>n;
      vector<int> v(n+1);
      int ans = 0;
      unordered_map<int, int> m;
      for(int i=0; i<n; i++) {
        int t;
        cin>>t;

        if (t <= n)
        m[t]++;
      }

      for(auto it: m) {
        int t = it.first;
        int p = t;
        while(t <= n) {
            v[t] += (it.second);
            ans = max(ans, v[t]);
            t += p;
        }
      }

      cout<<ans<<endl;
    }
}
