#include<iostream>
using namespace std;
int main(){
    int j=0,count=0;
    string s;
    string ss="hello";
    cin>>s;
   for(int i=0;i<s.length();i++)
   {
        if(s[i]==ss[j])
        {
            j++;
        }    

        if(j==5)
        break;
   }
   if(j==5)
    cout<<"YES";
   else
    cout<<"NO";


}