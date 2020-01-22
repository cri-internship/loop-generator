#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(980, 280, 40, "random");
	double *B = create_one_dim_double(450, "random");
	double *C = create_one_dim_double(760, "random");
	double *D = create_one_dim_double(240, "random");

	for (int d = 5; d < 240; d++)
	  for (int c = 5; c < 240; c++)
	    for (int b = 5; b < 240; b++)
	      for (int a = 5; a < 240; a++)
	      {
	        
	       D[a]=D[a-5]-C[a]/0.72*A[a][b][c];
	        
	       B[a]=B[a+2]/0.377;
	        
	       D[a]=0.64;
	        
	       double var_a=C[a]/0.359;
	       double var_b=C[a]-0.41;
	      }

    return 0;
}