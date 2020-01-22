#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(160, "random");
	double **B = create_two_dim_double(110, 920, "random");

	for (int c = 4; c < 917; c++)
	  for (int b = 4; b < 105; b++)
	    for (int a = 4; a < 105; a++)
	    {
	      
	      B[a][b]=B[a-1][b-4]-0.88;
	      
	      B[a][b]=A[a];
	      
	      double var_a=A[a]/0.237;
	      double var_b=A[a-4]+0.892;
	      
	      double var_c=B[a][b]*0.803;
	      double var_d=B[a][b-4]/0.12;
	      
	      A[a]=A[a]/B[a][b];
	      B[a][b]=A[a+2]/B[a][b];
	    }

    return 0;
}