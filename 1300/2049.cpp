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
        int p_found = 0, s_found = 0;
        for(int i=0; i<s.size(); i++) {
            if (s[i] == 'p') { 
                p_found = 1;
            }
            if (s[i] == 's' && p_found) {
                p_found = 2;
                break;
            }
            if (s[i] == 's') { 
                s_found = 1;
            }
        }
        if (s_found == 0 && p_found == 0) {
            cout<<"YES"<<endl;
        }
        else if (p_found ==2) {
            cout<<"NO"<<endl;
        } else if (p_found && s_found == 0) {
            cout<<"YES"<<endl;
        } else if (p_found == 0 && s_found) {
            cout<<"YES"<<endl;
        } else if (s[n-1] == 'p') {
            int count_p = 0, count_s = 0;
            for(int i=0; i<s.size(); i++) {
                count_p += s[i] == 'p';
                count_s += s[i] == 's';
            }
        
            if (count_p > 1) {
                if (count_s > 1 || s[0] != 's') {
                    cout<<"NO"<<endl;
                } else {
                    cout<<"YES"<<endl;
                }
            } else {
                cout<<"YES"<<endl;
            }
        } else if(s[0] == 's') {
            int count_p = 0, count_s = 0;
            for(int i=0; i<s.size(); i++) {
                count_p += s[i] == 'p';
                count_s += s[i] == 's';
            }

            if (count_s > 1) {
                if (count_p > 1 || s[n-1] != 'p') {
                    cout<<"NO"<<endl;
                } else {
                    cout<<"YES"<<endl;
                }
            } else {
                cout<<"YES"<<endl;
            }
        } else {
            cout<<"NO"<<endl;
        }
    }
}
