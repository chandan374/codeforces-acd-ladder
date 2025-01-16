#include <iostream> 
#include <queue>
#include<algorithm>
#include<math.h>
#include<unordered_set>
using namespace std;

int solve(int n, int m) {
    if (n<m) return 0;
    int t = n / m;
    return t + solve(t + n % m, m);
}

int main() {
    int t;
    cin>>t;
    while(t--) {
       int n, m;
       cin>>n>>m;
       cout<<m + solve(m, n)<<endl;
    }
}
