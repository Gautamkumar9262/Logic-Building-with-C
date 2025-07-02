//write a program which takes marks obtained in an examination (out of 100 ) from user and display the appropriate Grade
#include<stdio.h>
void main(){
    int x;
  
    printf("enter marks 0 to 100: ");
    scanf("%d", &x);
    switch(x) 
    {
    case 91 ... 100: printf("Grade A");
        break;
    case 81 ... 90: printf("Grade B");
        break;
    case 71 ... 80: printf("Grade C");
        break;
    case 61 ... 70: printf("Grade D");
        break;
    case 51 ... 60: printf("Grade E");
        break;
    case 101 ... 100000000000:printf("out of range"); break;

   
    default:
    printf("you are Faile");
    }
getch();
    }
