#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   for(int i=0;i<=n/2;i++)
   {
       for(int j=0;j<=n;j++)
       {
           if(j>=n/2-i&&j<=n/2+i)
           {
               cout<<"*";
           }
           else
           {
               cout<<"-";
           }
       }
       cout<<"\n";
   }
   
   for(int i=0;i<4;i++)
   {
       for(int j=0;j<=n;j++)
       {
          if(j>=n/2-1&&j<=n/2+1)
           {
               cout<<"*";
           }
           else
           {
               cout<<"-";
           }
       }
       cout<<"\n";
   }
    
}