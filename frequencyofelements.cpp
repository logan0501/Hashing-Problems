#include<bits/stdc++.h>
using namespace std;
void frequencyOfElementsEfficient(int arr[],int n){
    unordered_map<int,int> umap;
    for(int a=0;a<n;a++)umap[arr[a]]++;
    for(auto a:umap)cout<<a.first<<" "<<a.second<<endl;

}
void frequenctOfElementsNaive(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){flag=true;break;}
        }
        if(flag){
            continue;
        }
        int freq=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])freq++;
        }
        cout<<arr[i]<<" "<<freq<<endl;
    }
}
int main(){
    int arr[]={10,10,10,10,20,30};
    // frequencyOfElementsEfficient(arr,6);
    frequenctOfElementsNaive(arr,6);
    return 0;
}