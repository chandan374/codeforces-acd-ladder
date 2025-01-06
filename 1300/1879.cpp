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
      string s;
      cin>>s;
      vector<int> v;
      int t = 1;
      for(int i=1; i<s.size(); i++) {
        if (s[i] == s[i-1]) {
            t++;
        } else {
            if (t > 1) v.push_back(t);
            t = 1;
        }
      }
      if (t > 1) v.push_back(t);
      int sum = 0;
      for(auto i: v) {
        sum += (i - 1);
      }

      long long int ans = 0, p = 1;
      for(int i=0; i<v.size(); i++) {
        p = p * v[i];
        p = p % mo;
      }
      for(int i=1; i<=sum; i++) {
        p = p * i;
        p = p % mo;
      }
      cout<<sum<<" "<<p<<endl;

    }
}
