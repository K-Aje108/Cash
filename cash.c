#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
   
  int n = 0;
    float c;
    do
    {
      c = get_float("Change owed: ");
        
    }
      while (c < 0);
     
     c *=100;
float     round(c);

  { while ("c >=25")
     
    {     n++;
         c -=25;
    }  
     while ("c < 25 & c >=10") 
      {
          n++;
          c -=10;
      }
     while ("c < 10 & c >= 5")
     {
         n++;
         c -=5;
    }
      while ("c < 5 & c >=1")
     {
         n++;
         c -=1;
     }
    printf("%i\n", n);
}
    
}