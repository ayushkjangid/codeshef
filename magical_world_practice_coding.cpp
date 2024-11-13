#include <iostream>
using namespace std;

int main() {int t,x,a,b;
cin>>t;
while(t--){
    cin>>a>>b>>x;
    if(x*x>=a*b)cout<<0<<endl;
    else{
        if(a<b){
            b=1;
        
        if(x*x>=a*b)cout<<1<<endl;
        else cout<<2<<endl;
            
        }
        else {
            a=1;
            if(x*x>=a*b)cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
}
	return 0;
}

