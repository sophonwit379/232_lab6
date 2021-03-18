#include<stdio.h>
int main()
{
    int n,i,first,second,max;
    scanf("%d",&n);
    int order[n],score[n],count[n];
    for(i=0;i<n;i++)
    {
        count[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&order[i],&score[i]);
        count[order[i]-1]+=score[i];
    }
    first=1;
    max=count[0];
    for(i=1;i<n;i++)
    {
        if(max<count[i])
        {
            max=count[i];
            first=i+1;
        }
    }
    second=1;
    max=count[0];
    for(i=1;i<n;i++)
    {

        if(i!=first-1 && max<count[i])
        {
            max=count[i];
            second=i+1;
        }
    }
    printf("%d %d",first,second);
}
