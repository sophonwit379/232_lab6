#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j=0,k;
    scanf("%d",&n);
    char word[n][1000],tmp[1000];
    for(i=0;i<n;i++)
    {
        scanf("%s",word[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(word[i],word[j])>0)
            {
                strcpy(tmp,word[i]);
                strcpy(word[i],word[j]);
                strcpy(word[j],tmp);
            }
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",word[i]);
    }


}
