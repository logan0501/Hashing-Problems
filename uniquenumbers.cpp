#include<bits/stdc++.h>
using namespace std;
bool isUnique(int n){
    string s= to_string(n);
    unordered_set<int> us(s.begin(),s.end());
    return s.length()==us.size();
}
vector<int> uniqueNumbers(int L,int R)
{
    vector<int> v;
    for(int i=L;i<=R;i++){
        if(isUnique(i))v.push_back(i);
    }
    return v;
}
int main(){
    vector<int> v =uniqueNumbers(10,20);
    for(int a:v)cout<<a<<endl;
    return 0;
}