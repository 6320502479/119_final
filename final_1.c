#include <stdio.h>
#include <math.h>
int main()
{
    int k,n,ck,i;
    scanf("%d %d",&k,&n);
    while(i<32750)
        {
            k++;
            if(k%10==n)
                break;
        }
        printf("%d",k);
}
