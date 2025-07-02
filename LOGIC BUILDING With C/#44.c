#include<stdio.h>
void main(){
    int x;
    printf("1.jan\n2.feb\n3.mar\n4.apr\n5.may\n6.jun\n7.jul\n8.agu\n9.sep\n10.oct\n11.nov\n12.dec\n");
    printf("enter month number: ");
    scanf("%d", &x);
    switch(x) 
    {
    case 1: printf("january days 31");
        break;
    case 2: printf("febuary days 28");
        break;
    case 3: printf("march days 31");
        break;
    case 4: printf("april days 30");
        break;
    case 5: printf("may days 31");
        break;
    case 6: printf("june days 30");
        break;
    case 7: printf("july days 31");
        break;
    case 8: printf("agust days 31");
        break;
    case 9: printf("septmber days 30");
        break;
    case 10: printf("october days 31");
        break;
    case 11: printf("novemberdays 31");
        break;
    case 12: printf("decmber days 31");
        break;
    default:
    printf("Invalide month number");
    }
getch();
    }