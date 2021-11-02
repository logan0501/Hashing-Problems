#include<bits/stdc++.h>
using namespace std;
bool isSum(int arr[],int n,int sum){
    unordered_set<int> s;
    int pre_sum=0;
    for(int i=0;i<n;i++){
        pre_sum+=arr[i];
        if(pre_sum==sum || s.find(pre_sum-sum)!=s.end())return true;
        s.insert(pre_sum);
    }
    return false;
}
int main(){
    int arr[]={5,8,6,13,3,-1};
    cout<<isSum(arr,6,22);
    return 0;
}