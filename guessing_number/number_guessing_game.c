 // A Number Guessing Game -- Guess any Number.
#include <stdio.h>

int main()
{  
   //Declare Variables
   int i,flag=1, guess,number = 50, count=0;
   
   //Ask for input from user
   printf("Enter Guess: ");
   scanf("%d", &guess);
   
   do
   {
     if(guess == number)
     {
       flag = 0; // if flag equal zero means you got it correct
     }
     else if(guess < number)
     {
        flag=1;
        printf("Your number is too low\n");
        count++; // if flag equals one, counter keeps count how many times guessed.
     }
     else
     {
        flag=1;
        printf("Your number is too high\n");
        count++;
     }
     
     if(flag == 1)
     {
       printf("Sorry! Please guess again: ");
       scanf("%d",&guess);
     }
    
   } while(flag);
   
   printf("Congrats! You've Guessed the Number: %d\n", number); // displays correct guess on screen.
   printf("Number of Time Guessed: %d\n", count); // Times guessed.
   
 return 0;   
}
