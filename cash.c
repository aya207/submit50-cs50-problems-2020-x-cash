#include <cs50.h>
#include <stdio.h> 
#include <math.h> 

int main(void)
{ 
    float dollars; 
    do 
    {
        dollars = get_float("change owed in dollars: ");
    }
    while (dollars <= 0);
    int coins = 0; 
    int cents = round(dollars * 100);
     
     while (cents > 0)
     {
         if (cents >= 25)
         {
             cents -= 25;
             coins++;
         }
         else if (cents >= 10)
         {
             cents -= 10; 
             coins++;
         }
         else 
         {
             cents -= 1;
             coins++;
         }
     }
     printf("you are owed %i coins\n", coins);
}
