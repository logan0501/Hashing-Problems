#include<bits/stdc++.h>
using namespace std;
 bool subArrayExists(int arr[], int n)
{
    unordered_set<int> us;
    int pre_sum=0;
    for(int i=0;i<n;i++){
        pre_sum+=arr[i];
        if(us.find(pre_sum)!=us.end())return true;
        if(pre_sum==0)return true;
        us.insert(pre_sum);
    }
    return false;
}
int main(){
    int arr[]={4,2,-3,1,6};
    cout<<subArrayExists(arr,5);
    return 0;
}