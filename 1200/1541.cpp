#include <iostream> 
#include <queue>
#include<algorithm>
#include<math.h>
using namespace std;
long long int mo = 998244353;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }
        int ans = 0;
        for(int i=0; i<n; i++) {
            for(int j = 1; j<=2 * n; j++) {
                int t = v[i] * j;
                if (t > 2 * n) break;
                t = t - (i + 1);
                if ((t - 1) < n && (t-1) > i && j == v[t-1]) {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}
