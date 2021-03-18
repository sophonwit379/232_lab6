#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    char word[n][1000],tmp[n][1000],t[1000];
    for(i=0;i<n;i++)
    {
        scanf("%s",word[i]);
        strcpy(tmp[i],word[i]);
    }
    i=1;
    while(i<n-1)
    {
        if(strmp(tmp[i-1][j],word[i][j])==0)
        {
            j++;
            continue;
        }
        else
        {
            if(tmp[i][j]<word[i][j])
            {
                strcpy(,)
            }
        }
        j=0;
        i++;
    }




}
