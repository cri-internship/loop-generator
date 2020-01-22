#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(320, "random");
	double *B = create_one_dim_double(140, "random");
	double **A = create_two_dim_double(300, 810, "random");

	for (int c = 0; c < 805; c++)
	  for (int b = 5; b < 135; b++)
	    for (int a = 5; a < 135; a++)
	    {
	      
	      A[a][b]=B[a];
	      A[a][b]=A[a][b]+0.51;
	      
	      B[a]=B[a+5]+0.785;
	      
	      A[a][b]=A[a+4][b+5]/B[a]*C[a];
	      
	      C[a]=C[a]/0.001*B[a];
	      B[a]=C[a-3]*A[a][b]+0.408;
	      
	      double var_a=B[a]-0.212;
	      double var_b=B[a-5]+0.68;
	    }

    return 0;
}