#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin >> n;
          int a=120-n;
        string b;
        int sum = 0;
          cin >> b;
        for (int i = 0; i < n; i++) {
          
            if (b [i]== '1') sum++; 
        }
        if((a+sum)>=90)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
    }
    return 0;
}

