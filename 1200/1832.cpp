#include <iostream> 
#include <queue>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        vector<long long int> v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        for(int i=1; i<n; i++) {
            v[i] += v[i-1];
        }

        long long int ma = 0; 
        for(int i=0; i<=k; i++) {
            int back_remove_index = n - 1 - (k -i);
            long long int total = v[back_remove_index];
            if (i) {
                total -= v[i * 2 -1];
            }
            ma = max(ma, total);
        }
        cout<<ma<<endl;
    }
}
