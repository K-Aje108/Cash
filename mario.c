#include <cs50.h>
#include <stdio.h>

int main(void)
{

  int height;
  do
  {
      //Prompt user for how high mario's pyramid should be
      height = get_int("Height: ");
      
  }
    while (height<0 || height>23);

  for (int i = 0; i < height; i++)
  {
    //This makes the spaces reduce each row by subtracting user input by number of row and by another one
    for (int j = 0; j < height - i - 1; j++)
    {
      printf(" ");
    }
    
    for (int k = 0; k < i + 2 ; k++)
    {
      printf("#");
    }
   
  printf("\n");
  }
  
  }