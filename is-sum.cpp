#include <bits/stdc++.h>
using namespace std;

long sigma(long n){
    long long r;
    r=n*(n+1)/2;
    return r;
}

int main(){
    long long n;
    cin>>n;
    long long ans;
    ans=sigma(n);
    cout<<ans<<endl;
}