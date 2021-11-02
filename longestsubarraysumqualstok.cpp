#include<bits/stdc++.h>
using namespace std;
int longestsubarrayqualstok(int arr[],int n,int k){
    int res=0,pre_sum=0;
    unordered_map<int,int> umap;
    for(int i=0;i<n;i++){
        pre_sum+=arr[i];
        if(pre_sum==k)res=i+1;
        if(umap.find(pre_sum)==umap.end())umap.insert({pre_sum,i});
        if(umap.find(pre_sum-k)!=umap.end())res=max(res,i-umap[pre_sum-k]);
    }
    return res;
}
int main(){
    int arr[]={8,3,1,5,-6,6,2,2};
    cout<<longestsubarrayqualstok(arr,8,4);
    return 0;
}