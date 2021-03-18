#include<stdio.h>
int main()
{
    int n,i,first,second;
    scanf("%d",&n);
    int order[n],score[n],count[n];
    for(i=0;i<n;i++)
    {
        count[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&order[i],&score[i]);
        count[order[i]]+=score[i];
    }
    first=1;
    /*for(i=1;i<n;i++)
    {
        if(count[i-1]<count[i])
            first=i+1;

    }
    printf("%d",first);*/
}
