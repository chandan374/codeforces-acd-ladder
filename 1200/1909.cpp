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
        vector<long long int> v(n);
        int even = 0, odd = 0;
        for(int i=0; i<n; i++) {
            cin>>v[i];
            if (v[i] % 2) odd++; else even++;
        }
        if (even == n || odd == n) {
            long long int p = 2;
            while(1) {
                unordered_set<long long int> s;
                for(int i=0; i<v.size(); i++) {
                    s.insert(v[i]%p);
                }
                if (s.size() == 2) {
                    cout<<p<<endl; 
                    break;
                }
                p = p * 2;
            }
        } else {
            cout<<2<<endl;
        }
    }
}
