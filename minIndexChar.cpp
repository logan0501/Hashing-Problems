#include<bits/stdc++.h>
using namespace std;
string printMinIndexChar(string S, string patt)
{
	   unordered_set<char> us(patt.begin(),patt.end());
       for(char c:S)if(us.find(c)!=us.end()){string str;str+=c;return str;}
       return "$";
}
int main(){
    string S = "gfitdvbpsy", patt = "qfbtrlodkm";
    cout<<printMinIndexChar(S,patt);
    return 0;
}