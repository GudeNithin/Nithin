#include<stdio.h>
int main()
{
    int choice=0;
    printf("choose\n1.PIZZA\n2.BURGER\n3.PASTA\n4.FRENCH FRIES\n5.SANDWISH\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("ITEM NAME IS PIZZA\nPRICE IS RS-179\n");
                break;
        case 2: printf("ITEM NAME IS BURGER\nPRICE IS RS-129\n");
                break;
        case 3: printf("ITEM NAME IS PASTA\nPRICE IS RS-179\n");       
                break;
        case 4: printf("ITEM NAME IS FRENCH FRIES\nPRICE IS RS-99\n"); 
                break;
        case 5: printf("ITEM NAME IS SANDWISH\nPRICE IS RS-149\n"); 
                break;
        default: printf("SORRY...YOU ENTERED A WRONG CHOICE"); 
        return 0;
    }
}
