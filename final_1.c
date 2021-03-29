#include <stdio.h>
int main()
{
    int k,n,ck,i;
    scanf("%d",&k);
    scanf("%d",&n);
    if(k>n && n<10)
    {
        while(i<32750)
        {
            k++;
            if(k%10==n)
                break;
        }
        printf("%d",k);
    }
    return 0;
}
