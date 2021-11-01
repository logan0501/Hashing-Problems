#include<bits/stdc++.h>
using namespace std;
int unionOfArraysEfficient(int a[],int m,int b[],int n){
    unordered_set<int> us(a,a+m);
    for(int j=0;j<n;j++){
        us.insert(b[j]);
    }
    return us.size();
}
int main(){
    int a[]={10,15,20,15,30,30,5};
    int m=sizeof(a)/sizeof(a[0]);
    int b[]={30,5,30,80};
    int n=sizeof(b)/sizeof(b[0]);
    cout<<unionOfArraysEfficient(a,m,b,n);
    return 0;
}