#include<stdio.h>
#include<string.h>
void prefix(char str[]);
void suffix(char str[]);
void substring(char str[]);
void main()
{
    char input[20];
    printf("Enter the string: ");
    scanf("%s",input);
    prefix(input);
    suffix(input);
    substring(input);
}
void prefix(char str[])
{
    int i,j;
    printf("Prefix is: \n");
    for(i=0;i<strlen(str);i++)
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
    int i,j;
    printf("Suffix is: \n");
    for(i=0;i<strlen(str);i++)
    {
        for(j=i;j<=strlen(str);j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
}
void substring(char str[])
{
    int start,end,i;
    printf("Enter start and end index: ");
    scanf("%d%d",&start,&end);
    printf("Substring is: ");
    for(i=start;i<=end;i++)
        printf("%c",str[i]);

}

