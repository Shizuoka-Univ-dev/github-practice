#include <bits/stdc++.h>
using namespace std;

long sigma(long n){
    int r;
    r=n*(n+1)/2;
    return r;
}

int main(){
    int n;
    cin>>n;
    int ans;
    ans=sigma(n);
    cout<<ans<<endl;
}