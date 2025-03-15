#include<bits/stdc++.h>

using namespace std;
long long fibo(int n, vector<long long> &memo);
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    vector<long long> memo(n+1,-1);
    cout<<fibo(n,memo)<<endl;
    return 0;

}

long long fibo(int n, vector<long long> &memo){
    if(n <= 1) return n;
    if(memo[n] != -1) return memo[n];
    memo[n] = fibo(n-1, memo) + fibo(n-2, memo);
    return memo[n];
}
