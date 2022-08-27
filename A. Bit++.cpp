#include<iostream>
using namespace std;

int main(){
    int x=0,n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>s;
     for(int j=0;j<s.length();j++){
        if(s[j]=='+'){
            x++;
            break;
            
        }else if(s[j]=='-'){
            x--;
            break;
        }}
      

    }
    cout<<x;
    
}