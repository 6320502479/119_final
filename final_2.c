#include <stdio.h>
#include <math.h>
int main()
{
    int N,i,j;
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
    int max,count[N],cou=0;
    for(i=0;i<N;i++)
    {
        max=point[i];
        for(j=0;j<N;j++)
        {
            if(max==point[j])
            {
                cou++;
            }
        }
        count[i]=cou;
        cou=0;
    }
    int max2=0,c=0,c2=1;
    for(i=0;i<N;i++)
    {
        if(max2<count[i])
            max2=count[i];
        if(max2==count[i])
        {
            break;
        }
    }
    printf("%d",point[max2]);

}
}
