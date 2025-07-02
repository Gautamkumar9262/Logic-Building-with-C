#include <stdio.h>
#include <conio.h>

int main()
{
    int cha;
    printf("enter a character :");
    scanf("%c", &cha);
    if(cha>='A' && cha<='Z'){
 printf("upercase");
    }
       
    else if (cha>='a' && cha<='z')
    {
printf("lowercase");
    }
        
    else if (cha >= '0' && cha <= '9')
        printf("digit");
    else
    {
        printf("special charcter");
    }
}