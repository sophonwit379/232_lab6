#include<stdio.h>
int main()
{
    int n,i,j,j=0,k=0;
    char s[250];
    scanf("%d",&n);
    scanf("%s",&s);
    char pep[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            pep[i][j]='.';
        }
    }
    for(i=0;i<strlen(s);i++)
    {
        if(pep[i]=='U'||pep[i]=='D')
        {
            if(w>0&&s[i]=='U')
           {
                if(ar[w][h]=='.')
                {
                    ar[w][h]='|';
                }
                else if(ar[w][h]=='-')
                {
                    ar[w][h]='+';
                }
                w--;
                if(ar[w][h]=='.')
                {
                    ar[w][h]='|';
                }
                else if(ar[w][h]=='-')
                {
                    ar[w][h]='+';
                }
            }

    }
    /*for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c",pep[i][j]);
        }
        printf("\n");
    }*/


}
