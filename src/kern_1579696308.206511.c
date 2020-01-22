#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(550, "random");
	double *A = create_one_dim_double(340, "random");
	double **C = create_two_dim_double(920, 420, "random");

	for (int d = 2; d < 420; d++)
	  for (int c = 2; c < 337; c++)
	    for (int b = 2; b < 337; b++)
	      for (int a = 2; a < 337; a++)
	      {
	        
	       A[a]=A[a+3]-C[a][b]+B[a];
	        
	       C[a][b]=A[a];
	       C[a-2][b-2]=A[a];
	        
	       double var_a=A[a]-0.672;
	       double var_b=A[a+2]/0.175;
	      }

    return 0;
}