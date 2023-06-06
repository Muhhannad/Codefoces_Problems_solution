#include<iostream>
using namespace std;
int main()
{
    long long int n, a[100000];
    int count=1,countm=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<n-1;i++)
    {

        if(a[i]<=a[i+1])
        {
            count++;
        }
        else
        {
            count=1;
        }
        if(count>countm)
        countm=count;

    }
       cout<<countm;


}