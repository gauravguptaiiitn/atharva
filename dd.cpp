#include<bits/stdc++.h>
#include<string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;
int main()
{
    string s;
    int t;
    cin>>t;
    string s1,s2,s3,s4,s5,s6;
    while(t--)
    {
        cin>>s;
       for(int i=0;i<2;i++)
       {
          
           s1=s[i];
 s2=s[i+1];
s3=s1+s2;
          
       }
        for(int i=3;i<4;i++)
       {
          
           s4=s[i];
s5=s[i+1];
           s6=s4+s5;
 
       }
       int d1=stoi(s3);
         int d2=stoi(s6);
         cout<<d1<<d2;
         
         if(d1<=12 && d2<=12 || d1==d2)
         {
             cout<<"both"<<endl;
         }
        else if(d1<=31 && d2<=12)
         {
             cout<<"DD/MM/YYYY"<<endl;
         }
          else if(d1<=12 && d2<=31)
         {
             cout<<"MM/DD/YYYY"<<endl;
         }
   
       
       }
    return 0;
}
