// CS 153 PROGRAM ASSIGNMENT #2 
// 
// Normal Distribution program that asks the user for a mean, Standard
// Deviation, and number of x's to be calculated. The user then provides
// an x to be calculated which is printed as "f(x) = " providing
// the user with the probability density 
// 
// Mark Schuberth 
// 
// 9/18/2018 
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
  double mean, stdDev, dist, x, part1, part2;
  int count, N;
  
  /* prompts user for a mean */
  printf("Enter a mean: ");
  scanf("%lf", &mean);
  
  /* prompts user for a standard deviation */
  printf("Enter a standard deviation: ");
  scanf("%lf", &stdDev);
  
  /* prompts user for an N number of x's to be calculated */
  printf("Enter number of x's to be calculated: ");
  scanf("%d", &N);
  
   /* This for loop increments count until the number of x's chosen */
   /*   by the user is satisfied   */
   for(count = 0; count <= N-1; count++)
   {
    /* prompts user for an x value to be calculated */
    printf("Enter x-value: ");
    scanf("%lf", &x);
    
    /* prints f(x)= the answer to the normal distribution */
    printf("f(x)= "); 
    
    /* part1 of the calculation to find f(x) */
    part1 = 1.0/(stdDev*(sqrt(2.0*M_PI)));
    
    /* part2 of the calculation to find f(x) */
    part2 = exp((-0.5)*(((x-mean)/stdDev)*((x-mean)/stdDev)));
    
    /* The normal distribution formula below 'dist' implements both parts */
    /* of theprevious math statements to find the Normal distribution f(x) */
    dist = part1 * part2;
    
    /* prints output of the normal distribution as a double precision value */
    printf("%lf \n", dist);
   }
   
   return 0;
}
