#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main(){
   
string s1,s2;
cin>>s1>>s2;

for(int i=0;i<s1.size();i++){
    if(s1[i]>='A'&&s1[i]<='Z'){
        s1[i]+=32;   }
    if(s2[i]>='A'&&s2[i]<='Z'){
            s2[i]+=32;
        }
}int f=0;
for(int i=0;i<s1.size();i++){

if(s1[i]!=s2[i]){
    int x=s1[i]-s2[i];
    if(x<0){
        f=-1;
        break;
    }else{
        f=1;
        break;
    }
}

}
cout<<f;}
