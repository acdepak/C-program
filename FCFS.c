#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pt[100],tat[100],wt[100],ttat=0,twt=0;
    float awt,atat;
    int i,n;
    printf("enter no of processes: ");
    scanf("%d",&n);
    printf("\n Enter process time: ");
    for(i=0;i<n;i++)
    {
        printf("\n enter process time for p[%d]: ",i);
        scanf("%d",&pt[i]);
    }
    for(i=0;i<n;i++)
    {
    if(i==0)
    tat[i]=pt[0];
    else
    tat[i]=tat[i-1]+pt[i];
    wt[i]=tat[i]-pt[i];
    ttat=ttat+tat[i];
    twt=twt+wt[i];
    printf("\n tat=%d ,wt=%d",tat[i],wt[i]);
}
awt=twt/(float)n;
atat=ttat/(float)n;
printf("\n average turn around time=%f: ",atat);
printf("\n average waiting time = %f: ",awt);

}
