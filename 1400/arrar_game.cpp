#include <iostream> // Include iostream for cout and endl
#include <queue>
#include<algorithm>
#include<math.h>
using namespace std;

long long int solve(vector<long long int> v, int k) {
    if (k>=3) return 0;
    long long int ma;
    if (k==1) {
        while(k--) {
            sort(v.begin(), v.end());
            ma = v[0]; 
            for(int i=1; i<v.size(); i++) {
                ma = min(ma, v[i]);
                ma = min(ma, abs(v[i] - v[i-1]));
            }
            v.push_back(ma);
        }
    } else {
        sort(v.begin(), v.end());
        ma = v[v.size() -1 ];
        for(int i=0; i<v.size(); i++) {
            for(int j=i+1; j<v.size(); j++) {
                long long int diff = abs(v[i] - v[j]);
                ma = min(ma, diff);
                int t = lower_bound(v.begin(), v.end(), diff) - v.begin();
                if (t < v.size()) {
                    ma = min(ma, abs(v[t] - diff));
                }
                if (t > 0) {
                    ma = min(ma, abs(v[t-1] - diff));
                }
            }
        }
    }
    return ma;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        vector<long long int> v; 
        while(n--) {
            long long int t;
            cin>>t; 
            v.push_back(t);
        }
        cout<<solve(v, k)<<endl;
    }
}

//899214809992477

// 7112183186067757
// 899214809992477

// 74859962623690081
// 7112183186067757
// 899214809992477
