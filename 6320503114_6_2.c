#include<stdio.h>
int main()
{
    int i,n,number,guess,tmp1,tmp2,yes=0,no=0;
    scanf("%d",&n);
    scanf("%d",&number);
    scanf("%d",&guess);
    for(i=0;i<n;i++)
    {
        tmp1=number%10;
        tmp2=guess%10;
        if(tmp1==tmp2)
            yes++;
        else
            no++;
        number/=10;
        guess/=10;
    }
    printf("%d %d",yes,no);





}
