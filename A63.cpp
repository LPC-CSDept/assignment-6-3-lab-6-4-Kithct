#include <iostream>
using namespace std;
int getsum(int);

int main()
{
    int n,res;
    cout<<"Enter your input\n";
    cin>>n;

    res=getsum(n);
    cout<<"The summation result is "<<res;
}

int getsum(int n)
{
    int a,min,max,sum=0,Finalsum;
    int num[n];
    for(int i=0;i<n;i++)
        cin>>num[i];
    min=num[0];
    for(int i=0;i<n;i++)
    {
        if(min>num[i])
            min=num[i];
    }
    cout<<min;
    max=num[0];
    for(int i=0;i<n;i++)
    {
        if(max<num[i])
            max=num[i];
    }
    cout<<max;
    for(int i=0;i<n;i++)
        sum+=num[i];
    Finalsum=sum-min-max;
    return Finalsum;
}