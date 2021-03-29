#include <stdio.h>
int main()
{
    int k,n,c,ck;
    scanf("%d",&n);
    scanf("%d",&c);
    if((n>0 && n<32750) && c<10)
    {
        k=n;
        while(k)
        {
            k++;
            if(k%10==c)
                break;
        }
        if(k>n)
        printf(" %d",k);
    }
    return 0;
}
