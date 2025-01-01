#include <iostream> 
#include <queue>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
    int mean, median;
    cin>>mean>>median;
    cout<<3<<endl; 
    int t = mean * 3 - median;
    cout<<-1 * 1000<<" "<<median<<" "<<1000+ t<<endl;
}
