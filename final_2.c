#include <stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    int point[N];
    if(N>=2 && N<=1000)
{
       for(i=0;i<N;i++)
    {
        scanf("%d",&point[i]);
        if(point[i]<1 || point[i]>10000)
            break;
    }
    int max=point[0],posi=1,count=0;
    for(i=0;i<N;i++)
    {
       if(max<point[i])
       {
           max=point[i];
           posi=i+1;
           count=0;
       }
       if(max==point[i])
            count++;
    }
    if(count>1)
    {
        for(i=0;i<N;i++)
            if(max==point[i])
                break;
                printf("%d %d",i+1,max);
    }
    else
        printf("%d",max);
}
}
