#include<bits/stdc++.h>
using namespace std;
int intersectionOfArraysEfficient(int a[],int m,int b[],int n){
    unordered_set<int> us(a,a+m);
    int res=0;
    for(int i=0;i<n;i++){
        if(us.find(b[i])!=us.end()){
            res++;
            us.erase(b[i]);
        }
    }
    return res;
}
int main(){
    int a[]={10,15,20,15,30,30,5};
    int m=sizeof(a)/sizeof(a[0]);
    int b[]={30,5,30,80};
    int n=sizeof(b)/sizeof(b[0]);
    cout<<intersectionOfArraysEfficient(a,m,b,n);
    return 0;
}