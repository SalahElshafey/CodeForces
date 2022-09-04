#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
   
string s,res="";
cin>>s;
sort(s.begin(),s.end());

if(s[0]=='+'){

for(int i=0;i<s.length()-1;i++){
    if(s[i]!='+'){
        res=res+s[i]+'+';
    }
}
res=res+s[s.length()-1];
cout<<res;

}else{

cout<<s;

}






}
