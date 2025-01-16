#include <iostream> 
#include <queue>
#include<algorithm>
#include<math.h>
#include<unordered_set>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
       int n;
       cin>>n;
       int flag = 0, p = -1;
       for(int i=0;i<n;i++) {
            int t;
            cin >> t;
            if (p == -1) {
                p = t;
            } else if (p <= t) {
                flag = 1;
            }
            p = t;
       }
       if (flag) {
        cout<<"YES"<<endl;
       } else {
        cout<<"NO"<<endl;
       }
    }
}
