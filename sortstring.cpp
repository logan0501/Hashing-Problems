#include<bits/stdc++.h>
using namespace std;
#define MAXCHAR 26
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int arr[MAXCHAR]={0};
        for(char c:s)arr[c-'a']++;
        for(int i=0;i<26;i++){
            for(int j=0;j<arr[i];j++){
                cout<<(char)('a'+i);
            }
        }
        cout<<endl;
    }
    return 0;
}