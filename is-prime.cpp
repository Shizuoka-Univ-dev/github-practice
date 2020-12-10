#include<bits/stdc++.h>
using namespace std;

//true:prime
//false:not prime
bool isPrime(int N){

    if (N < 2) return false;
    else if (N == 2) return true;
    
    //偶数は自明
    else if (N % 2 == 0) return false; 

    for (int i=3; i<=sqrt(N); i+=2){
        if (N % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int N;

    cin>>N;

    cout<<isPrime(N)<<endl;

    return 0;

}