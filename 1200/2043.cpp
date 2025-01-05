#include <iostream> 
#include <queue>
#include<algorithm>
#include<math.h>
#include <unordered_set>
using namespace std;

int countPrimeInFactorial(int n, int p) {
    int count = 0;
    for (long long power = p; power <= n; power *= p) {
        count += n / power;
    }
    return count;
}

bool factorialDivisibleByK(int n, int k) {
    if (k == 1) {
        return true; 
    } else if (k == 2) {
        return countPrimeInFactorial(n, 2) >= 1;
    } else if (k == 3) {
        return countPrimeInFactorial(n, 3) >= 1; 
    } else if (k == 4) {
        return countPrimeInFactorial(n, 2) >= 2;
    } else if (k == 5) {
        return countPrimeInFactorial(n, 5) >= 1;
    } else if (k == 6) {
        return countPrimeInFactorial(n, 2) >= 1 && countPrimeInFactorial(n, 3) >= 1;
    } else if (k == 7) {
        return countPrimeInFactorial(n, 7) >= 1; 
    } else if (k == 8) {
        return countPrimeInFactorial(n, 2) >= 3; 
    } else if (k == 9) {
        return countPrimeInFactorial(n, 3) >= 2;
    }
    return false;
}

bool check_kar(int n, int d, int k) {
    unordered_set<int> s;
    int rem = 0; 
    int count = 0;
    while(1) {
        int q = rem * 10 + d;
        rem = q % k;
        if (s.find(rem) != s.end()) return false;
        s.insert(rem);
        count ++;
        if (rem == 0) break;
    }

    if (factorialDivisibleByK(n, count)) {
        return true;
    }

    return false;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n >>m;
        for(int i=1; i<10; i++) {
            if (i%2 == 0) continue;
            if (check_kar(n, m, i)) {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}

