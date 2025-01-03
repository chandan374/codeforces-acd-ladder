#include <iostream> 
#include <queue>
#include<algorithm>
#include<math.h>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v;
        unordered_map<int, int> m; 
        long long int ans = 0;
        for(int i=0; i<n; i++) {
            int t;
            cin>>t;
            t = t - i;
            ans += (m[t]);
            m[t]++;
        }
        cout<<ans<<endl;
    }
}
