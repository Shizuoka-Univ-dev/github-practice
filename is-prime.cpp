#include<bits/stdc++.h>
using namespace std;

//true:prime
//false:not prime
bool isPrime(int N){

    //自明な数字はあらかじめ除外
    if (N < 2) return false;
    else if (N == 2) return true;
    else if (N % 2 == 0) return false; 

    int sqrtN = sqrt(N);
    for (int i=3; i<=sqrtN; i+=2){
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