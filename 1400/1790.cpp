#include <iostream> 
#include <queue>
#include<algorithm>
#include<math.h>

using namespace std;

int clearLeftmostBit(long long int num) {
    for(int i=33; i>=0; i--) {
        if ((num>>i) & 1) {

            num = num - (1 << i);
            break;
        }
    }
    return num;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        long long int num, sum;
        cin>>num;
        sum = clearLeftmostBit(num * 2);
        int carry = 1;
        long long int a = 0, b = 0;
        int p = num;
        int count = 0;
        while(p) {
            count++;
            p = p / 2;
        }
        for(long long int i=count-1; i>=0; i--) {
            int is_set = (num >> i) & 1;
            int sum_set = (sum >> i) & 1;

            if (sum_set && is_set) {
                if (carry) {
                    break;
                } else {
                    carry = 0;
                    a += (1 << i);
                }
            } else if (sum_set) {
                if (carry) {
                    a += (1 << i);
                    b += (1 << i);
                } else {
                    carry = 1;
                }
            } else if (is_set) {
                if (carry) {
                    a += (1 << i);
                } else {
                    carry=1;
                    break;
                }
            } else {
                if (carry) {
                    a += (1 << i);
                    b += (1 << i);
                    carry = 0;
                }
            }
        }
        if (carry) {
            cout<<-1<<endl;
        } else {
            cout<<a<<" "<<b<<endl;
        }
    }
}
