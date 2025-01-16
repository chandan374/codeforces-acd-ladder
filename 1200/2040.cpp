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
       int t = 1;
       int count = 1;
       while(t < n) {
        t = t * 2 + 2;
        count++;
       }
       cout<<count<<endl;
    }
}

// 1
// 1 4
// 1 4 10
// 1 4 10 22
// 1 4 10 22 46