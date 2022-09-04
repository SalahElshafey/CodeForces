#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main(){
   
string s,s2="";
cin>>s;
for(int i=0;i<s.length();i++){
    if(s[i]>='A'&& s[i]<='Z'){
        s[i]+=32;
    }
}
for(int i=0;i<s.length();i++){
    if(s[i]!='a'&&s[i]!='o'&&s[i]!='y'&&s[i]!='e'&&s[i]!='u'&&s[i]!='i'){
     s2.push_back('.');
        s2.push_back(s[i]);
         
    }
}
cout<<s2;






}
