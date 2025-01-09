#include <iostream> 
#include <queue>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
       int n;
       cin>>n;
       int total = 0;
       for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                int t = n; 
                int p = n;
                int ans = 0;

                while(t > 0 && p > 0) {
                    if (t == i) {
                        t--;
                        continue;
                    }
                    if (p == j) {
                        p--;
                        continue;
                    }
                    ans += p * j;
                    p--; 
                    t--;
                }
                total = max(total, ans);
            }
       }
       cout<<total<<endl;
    }
}
