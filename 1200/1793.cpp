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
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++) {
            int t;
            cin>>t;
            v.push_back(t);
        }
        int mi = 1; 
        int ma = n;
        int i =0;
        int j = n - 1;
        while (i < j) {
            int flag = 1;
            if (ma == v[i]) {
                ma --;
                flag = 0;
                i++;
            }
            if (mi == v[i]) {
                mi++;
                flag = 0;
                i++;
            }

            if (ma == v[j]) {
                ma --;
                flag = 0;
                j--;
            }
            if (mi == v[j]) {
                mi++;
                flag = 0;
                j--;
            }
            if (flag) break;
        }

        if ((j - i + 1) < 4) {
            cout<<-1<<endl;
        } else {
            cout<<i + 1<<" "<<j+1<<endl;
        }
    }
}
