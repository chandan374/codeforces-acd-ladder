#include <iostream> 
#include <queue>
#include<algorithm>
#include<math.h>
using namespace std;


long long int solve(vector<long long int> &v) {
    sort(v.begin(), v.end());
    long long int sum = 0;
    for(int i=0; i<v.size(); i++) {
        sum += v[i] * i;
        sum -= (v[i] * (v.size() - 1 - i));
    }
    return sum;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        vector<vector<long long int> > v(k, vector<long long int>(n));
        for(int i=0; i<n; i++) {
            for(int j=0; j<k; j++) {
                cin>>v[j][i];
            }
        }
        long long int ans = 0;
        for(int i=0; i<k; i++) {
            ans += solve(v[i]);
        }
        cout<<ans<<endl;
    }
}
