#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(390, 780, 190, "random");
	double **C = create_two_dim_double(930, 110, "random");
	double *A = create_one_dim_double(430, "random");

	for (int d = 5; d < 430; d++)
	  for (int c = 5; c < 430; c++)
	    for (int b = 5; b < 430; b++)
	      for (int a = 5; a < 430; a++)
	      {
	        
	       double var_a=A[a]-0.119;
	       double var_b=A[a-5]/0.495;
	      }

    return 0;
}