#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(750, "random");
	int **A = create_two_dim_int(180, 760, "random");

	for (int d = 2; d < 760; d++)
	  for (int c = 5; c < 180; c++)
	    for (int b = 5; b < 180; b++)
	      for (int a = 5; a < 180; a++)
	      {
	        
	       A[a][b]=A[a-1][b-2]/25;
	        
	       B[a]=B[a-5]*A[a][b];
	        
	       B[a]=B[a+2]-38;
	        
	       int var_a=B[a]-49;
	       int var_b=B[a-4]-48;
	      }

    return 0;
}