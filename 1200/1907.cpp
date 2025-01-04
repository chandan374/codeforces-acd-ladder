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
        string s;
        cin>>s;
        vector<int> v(26);
        for(int i=0; i<s.size(); i++) {
            v[s[i]-'a']++;
        }

        sort(v.begin(), v.end(), greater<int>());
        while(v[0] > 0) {
            if (v[1]==0) break; 
            v[0] --;
            v[1] --;
            sort(v.begin(), v.end(), greater<int>());
        }
        cout<<v[0]<<endl;
    }
}
