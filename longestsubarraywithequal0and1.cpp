#include<bits/stdc++.h>
using namespace std;
int longSub(int arr[],int n){
    int res=0;
    int pre_sum=0;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
             pre_sum+=-1;
        }else pre_sum+=arr[i];
       
        if(pre_sum==0)res=i+1;
        if(m.find(pre_sum)==m.end()){
            m[pre_sum]=i;
        }
        if(m.find(pre_sum)!=m.end()){
            res=max(res,i-m[pre_sum]);
        }
    }
    return res;
}
int main(){
    int arr[]={1,0,1,1,1,0,0};
    cout<<longSub(arr,7);
    return 0;
}