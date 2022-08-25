#include<bits/stdc++.h>
using namespace std;
int total=0;
int main()
{
        int n,s,count[5]={0,0,0,0,0};
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            count[s]++;
      }
 
      total+=count[4]+count[3];
      if(count[1]>count[3])
      {
            if(count[2]%2!=0)
            {
                  int a=count[1],b=count[3];
                  a-=b;
                  int c=(a+count[2]*2+3)/4;
                  total+=c;
            }
            else
            {
                 int a=count[1],b=count[3];
                  a-=b;
                total+=count[2]/2+(a+3)/4;
            }
      }
      else
      {
            total+=(count[2]+1)/2;
      }
      cout<<total;
      return 0;
}
