#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(380, 60, "random");
	double ***B = create_three_dim_double(580, 480, 650, "random");

	for (int d = 4; d < 55; d++)
	  for (int c = 5; c < 375; c++)
	    for (int b = 5; b < 375; b++)
	      for (int a = 5; a < 375; a++)
	      {
	        
	       A[a][b]=A[a-3][b-4]/0.254;
	        
	       A[a][b]=A[a-5][b-4]+0.087;
	        
	       double var_a=A[a][b]*0.621;
	       double var_b=A[a+5][b+4]+0.544;
	      }

    return 0;
}