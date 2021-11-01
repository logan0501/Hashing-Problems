#include<bits/stdc++.h>
using namespace std;
bool isPair(int arr[],int n,int sum){
    unordered_set<int> us;
    for(int i=0;i<n;i++){
        if(us.find(sum-arr[i])!=us.end()){
            return true;
        }else{
            us.insert(arr[i]);
        }
    }
    return false;
}
int main(){
    int arr[]={3,2,8,15,-8};
    cout<<isPair(arr,5,5);
    return 0;
}