#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std ;

int main(){
    int n , m ;
    while(scanf("%d%d",& n ,& m )!=EOF){
        int ans = n * m / 2;
        printf("%d\n", ans );
    }
    return 0;
}
