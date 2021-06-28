#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    char a[101],rev_a[101];
    int i,j;
    scanf("%s",a);

        int l=strlen(a);
        j=0;
        for(i=l-1;i>=0;i--)
        {
            rev_a[j]=a[i];
            if(j<l)
                j++;
            else break;
        }
        int c=0;
        for(j=0;j<l;j++){
            if(rev_a[j]==a[j])
                c++;
        }
        if(c==l)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    return 0;
}
