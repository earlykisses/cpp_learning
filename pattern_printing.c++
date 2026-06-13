#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }
        int x=1;
        while(x<=2*(i-1)){
            cout<<"*";
            x++;
            
        }
        int k=n-i+1;
        while(k>=1){
            cout<<k;
            k--;
        }
        
        cout<<endl;
        i=i+1;
    }

    return 0;
}
