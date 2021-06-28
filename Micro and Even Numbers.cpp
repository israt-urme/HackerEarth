#include<bits/stdc++.h>
using namespace std;

int fact(int x)
{
    int sum=1;
    for(int i=1;i<=x;i++)
        sum=sum*i;
    return sum;
}

int cmb(int c,int k)
{
    int r=fact(c)/(fact(k)*fact(c-k));
    return r;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int c=0;
    for(int i=0;i<n;i++)
        if(a[i]%2==0)
            c++;

    int nCr= cmb(c,k);
    cout<<nCr<<endl;

    return 0;
}
