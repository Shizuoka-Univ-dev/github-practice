#include<bits/stdc++.h>
using namespace std;

//1:prime
//0:not prime
bool isPrime(int N){

    if( N == 1 || N == 0){
        return 0;
    }

    for(int i=2; i<N; i++){
        if( N%i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int N;

    cin>>N;

    cout<<isPrime(N)<<endl;

    return 0;

}