#include<stdio.h>
long long int scan()
{
    long long int n=0;
    int ch=getchar_unlocked();
    while(ch<'0'||ch>'9')
        ch=getchar_unlocked();
    while(ch>='0'&&ch<='9')
    {
        n=(n*10)+ch-'0';
        ch=getchar_unlocked();
    }
    return n;
}
int main()
{
    long long int t,n,m;
    t=scan();
    while(t--)
    {
        long long int arr[10];
        int i,j,count=0;
        n=scan();
        m=scan();
        for(i=0;i<n;i++)
            arr[i]=scan();
        for(i=1;i<n;i++)
        {
            for(j=0;j<n-i;j++)
            {
                if(arr[j]<arr[j+1])
                {
                    long long int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        //for(i=0;i<n;i++)
          //  printf("%lld ",arr[i]);
        for(i=0;i<n;i++)
        {
            m-=arr[i];
            //printf("m=%lld\n",m);
            count++;
            if(m<=0)
                break;
        }
        if(i>=n)
            printf("-1\n");
        else
            printf("%d\n",count);
    }
    return 0;
} 
