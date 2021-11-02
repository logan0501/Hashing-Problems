#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(vector<ll> A, vector<ll> B, int N) {
    unordered_map<int,int> um;
    for(int i=0;i<N;i++){
        um[A[i]]++;
        um[B[i]]--;
    }
    for(auto a:um)
        if(a.second!=0)return false;
    
    return true;
}
int main(){
   vector<long long>A = {1,2,5,4,0};
    vector<long long>B = {2,4,5,0,1};
    cout<<check(A,B,5);
    return 0;
}