#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(390, 780, "ones");
	double *A = create_one_dim_double(670, "ones");
	double **B = create_two_dim_double(790, 630, "ones");

	for (int c = 3; c < 630; c++)
	  for (int b = 4; b < 390; b++)
	    for (int a = 4; a < 390; a++)
	    {
	      
	      B[a][b]=0.201-C[a][b];
	      B[a-4][b-3]=A[a];
	      
	      double var_a=C[a][b]-0.649;
	      double var_b=C[a-1][b-3]/0.108;
	      
	      A[a]=B[a][b]*0.845;
	      C[a][b]=B[a-1][b-2]/0.349+A[a];
	      
	      B[a][b]=A[a]-B[a][b]/B[a][b];
	      C[a][b]=A[a+4]+0.07-B[a][b];
	    }

    return 0;
}