#include<stdio.h>
#include<string.h>
void prefix(char str[]);
void suffix(char str[]);
void substring(char str[]);
void main()
{
    char str[20];
    printf("\nEnter a string: ");
    scanf("%s",str);
    prefix(str);
    suffix(str);
    substring(str);
}
void prefix(char str[])
{
    int i,n,j;
    n=strlen(str);
    printf("Prefix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
}
void suffix(char str[])
{
    int i,n,j;
    n=strlen(str);
    printf("Suffix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
}
void substring(char str[])
{
    int start,end,i;
    printf("Enter the starting index and ending index: ");
    scanf("%d%d",&start,&end);
    printf("Substring is:\n");
    for(i=start;i<=end;i++)
    {
        printf("%c",str[i]);
    }
}
