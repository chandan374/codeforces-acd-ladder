#include <iostream> 
#include <queue>
#include<algorithm>
#include<math.h>
#include <algorithm>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b; // Explicitly use std::
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long int n, x, y;
        cin>>n>>x>>y;
        long long int p = lcm(x,y);
        long long int common_vars = n / p;
        long long int count_x = n / x - common_vars;
        long long int count_y = n / y - common_vars;
        long long int sum = count_y * (count_y + 1) / 2;
        long long int t = n - count_x;
        t = (n * (n+1)) / 2 - (t * (t+1))/2;
        cout<<t - sum<<endl;
    }
}
