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
        vector<int> v(n);
        int even = 0, odd = 0;
        int gcd = 0;
        for(int i=0; i<n; i++) {
            cin>>v[i];
            if (i) {
                gcd = __gcd(v[i], gcd);
            } else {
                gcd = v[i];
            }
            if (v[i] % 2) odd++; else even++;
        }
        if (even == n) {

        } else if (odd == n) {
            cout<<4<<endl;
        } else {
            cout<<2<<endl;
        }


    }
}
