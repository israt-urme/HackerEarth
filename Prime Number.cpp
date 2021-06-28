#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,flag;
    cin>>x;
    if(x==1)
        printf("1\n");
    else
    {
        for(int j=2;j<=x;j++)
        {
            flag=0;
            for(int i=2;i<=(j/2);i++)
            {
                if(j%i==0)
                {
                    flag=1;
                    break;
                }
                else
                    flag=0;
            }
            if(j==x && flag==0)
                printf("%d\n",j);
            else if(flag==0)
                printf("%d ",j);
        }
    }
    return 0;
}

