#include<stdio.h>
void lyear();
int main()
{
    int year;
    printf("enter any year\n");
    scanf("%d",&year);
    lyear (year);
    
}
void lyear(int year)
{
    // if (year % 100 == 0 && year%400 == 0)
    // printf("leap year");
    // else if(year % 400 != 0)
    //  printf("not a leap year");
    // else if (year % 4 == 0)
    // printf("a leap year");
    // else
    // printf("not a leap year");

    if(year%100==0){
        if(year%400==0)
          printf("leap");
        else 
         printf("not");  
    }else{
        if(year % 4==0)
          printf("leap");
          else 
          printf("not");
    }
}