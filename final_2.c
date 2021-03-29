#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int point[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&point[i]);
    }
    int max=point[0],posi=1,count=0;
    for(i=0;i<n;i++)
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
     for(i=0;i<n;i++)
     {
         if(max==point[i])
            printf("%d ",i+1);
     }
}
else
    printf("%d",posi);

}
