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
       int n, x, y;
       cin>>n>>x>>y;
       vector<int> ans(n+1);
       for(int i=y; i<=x; i++) {
            ans[i] = 1;
       }
       int j = y-1;
       int t = -1;
       while(j>=0) {
            ans[j] = t;
            t = t * (-1);
            j--;
       }
       j = x + 1;
       t = -1;
       while(j <= n) {
            ans[j] = t;
            t = t * (-1);
            j++;
       }
       for(int i=1; i<=n; i++) {
            cout<<ans[i] <<" ";
       }
       cout<<endl;
    }
}
