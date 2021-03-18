#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,w=0,h=0;
    char cha[250];
    scanf("%d",&n);
    scanf("%s",cha);
    char pep[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            pep[i][j]='.';
        }
    }
    for(i=0;i<strlen(cha);i++)
    {
      if(cha[i]=='U'||cha[i]=='D')
        {
            if(w>0&&cha[i]=='U')
            {
                if(pep[w][h]=='.')
                    pep[w][h]='|';
                else if(pep[w][h]=='-')
                    pep[w][h]='+';
                w--;
                if(pep[w][h]=='.')
                    pep[w][h]='|';
                else if(pep[w][h]=='-')
                    pep[w][h]='+';
            }
            if(w<n-1&&cha[i]=='D')
            {
                if(pep[w][h]=='.')
                    pep[w][h]='|';
                else if(pep[w][h]=='-')
                    pep[w][h]='+';
                w++;
                if(pep[w][h]=='.')
                    pep[w][h]='|';
                else if(pep[w][h]=='-')
                    pep[w][h]='+';
            }
        }
        else if(cha[i]=='R'||cha[i]=='L')
        {
            if(h<n-1&&cha[i]=='R')
            {
                if(pep[w][h]=='.')
                    pep[w][h]='-';
                else if(pep[w][h]=='|')
                    pep[w][h]='+';
                h++;
                if(pep[w][h]=='.')
                    pep[w][h]='-';
                else if(pep[w][h]=='|')
                    pep[w][h]='+';
            }
            if(h>0&&cha[i]=='L')
            {
                if(pep[w][h]=='.')
                    pep[w][h]='-';
                else if(pep[w][h]=='|')
                    pep[w][h]='+';
                h--;
                if(pep[w][h]=='.')
                    pep[w][h]='-';
                else if(pep[w][h]=='|')
                    pep[w][h]='+';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c",pep[i][j]);
        }
        printf("\n");
    }

}
