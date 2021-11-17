#include<stdio.h>

void substring(char *str,int start,int end)
{
    char ans[100];
    for(int i=start;i<=end;i++)
    {
        ans[i-start]=str[i];
        printf("%c",ans[i-start]);
    }
    printf("\n");
    return;
}

int strlength(char* str)
{
    int x,i=0;
    
    while(1)
    {
        if(str[i]=='\0')
        {
            x=i;
            break;
        }            
        i++;
    }
    return x;
}

void strcopy(char* str1,char* str2)
{
    int x=strlength(str1);
    for(int i=0;i<x+1;i++)
    {
        *str2=*str1;
        str1++;
        str2++;
    }
    return;
}

void reverse(char *str)
{
    int n=strlength(str)+1;
    char temp[100];
    char* p=temp+n-2;
    strcopy(str,temp);
    for(int i=0;i<n;i++)
    {
        *str=*p;
        str++;
        p--;
    }
    return;
}

int strcomp(char* str1,char* str2)
{
    int n=strlength(str1);
    for(int i=0;i<n;i++)
    {
        if(*str1!=*str2)
            return 0;
        str1++;
        str2++;
    }
    return 1;
}

int palindrome(char *str)
{
    char temp[100];
    strcopy(str,temp);
    reverse(str);
    return strcomp(temp,str);    
}

int main()
{
    char str[100];

    int choice;
    printf("Select string operation:\n");
    printf("1.Substring\n");
    printf("2.Copy string\n");
    printf("3.String compare\n");
    printf("4.Palindrome\n");
    printf("5.Reverse string\n");
    printf("6.String length\n");
    scanf("%d",&choice);

    int p,l,n,x;
    char str2[100];
    switch(choice)
    {
        case 1:
        printf("Enter string:\n");
        scanf("%s",str);
        printf("Enter position of first and last element for new string: \n");
        scanf("%d %d",&p,&l);
        substring(str,p,l);
        break;

        case 2:
        printf("Enter string:\n");
        scanf("%s",str);
        strcopy(str,str2);
        printf("First string: %s\n",str); 
        printf("Copied string: %s\n",str2);
        break;

        case 3:
        printf("Enter first string:\n");
        scanf("%s",str);
        printf("Enter second string\n");
        scanf("%s",str2);
        if(strcomp(str,str2))
            printf("Both strings are same\n");
        else
            printf("Both strings are not same\n");
        break;

        case 4:
        printf("Enter string:\n");
        scanf("%s",str);
        n=palindrome(str);
        if(n==1)
            printf("String is palindrome\n");
        else
            printf("String is not palindrome\n");
        break;

        case 5:
        printf("Enter string:\n");
        scanf("%s",str);
        reverse(str);
        printf("Rverse of string is : %s\n",str);
        break;

        case 6:
        printf("Enter string:\n");
        scanf("%s",str);
        printf("%d",strlength(str));
        break;
        
        default:
        printf("Enter valid number\n");
        break;
    }
    return 0;
}
