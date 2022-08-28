#include<bits/stdc++.h>
using namespace std;
 
 
 
int main(){
 
    int a,posR,posC,ans = 0;
 
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> a;
            if(a == 1){
                posR = i;
                posC = j;
            }
        }
    }
    ans+= abs(2-posR)+abs(2-posC);
    cout << ans << endl;
    return 0;
}
