//Q.1 Write a Program to print all alphabets from a to z by skipping 3 alphabets using do while loop.
#include <stdio.h>
int main()
{
    char x ='a';
    do
    {
        printf("%c\t",x);
        x=x + 4;
    }while(x<='z');
    return 0;
}

//Q.2 Write a Program to count the total number of digits in a number.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter any number: ");
    scanf("%d",&a);
    while(a>0)
    {
        b++;
        a/=10;
    }
    printf("Total number of digits: %d",b);
    return 0;
}

//Q.3 Write a Program to find the sum of a first and the last digit of a number.
#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter any number: ");
    scanf("%d",&a);
    while(a>0)
    {
        b++;
        if(b++ == 1)
        {
            d=a%10;
        }
        c=a%10;
        a/=10;
    }
    printf("The sum of the first and the last digit: %d",c+d);
    return 0;
}