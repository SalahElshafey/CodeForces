#include<iostream>
#include<algorithm>
#include<cstring>
#include <set>


using namespace std;

int main(){
set<char>s2;
string s;
cin>>s;

for(int i=0;i<s.length();i++){
    s2.insert(s[i]);
}
if(s2.size()%2==0){
    cout<<"CHAT WITH HER!";
}else{
    cout<<"IGNORE HIM!";
}
 }
