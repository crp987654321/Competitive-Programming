#include<stdio.h>
    int main(){
    int t,n,a[101],j,i;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0,j=n-1;i<j;i++,j--)
    {
    if(a[i]!=a[j])
    {
    printf("no\n");
    break;
    }
    if(a[i]>7)
    {
    printf("no\n");
    break;
    }
    if((a[i+1]-a[i])!=1 && (a[i+1]-a[i])!=0)
    {
    printf("no\n");
    break;
    }
    }

    if(i>=j)
    {
    if(a[i]==7)
    {
    printf("yes\n");
    }
else
printf("no\n");
    }

    }
    return 0;
    }
