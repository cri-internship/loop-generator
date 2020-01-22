#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(930, "ones");
	double **C = create_two_dim_double(730, 780, "ones");
	double **A = create_two_dim_double(680, 140, "ones");

	for (int c = 5; c < 140; c++)
	  for (int b = 4; b < 676; b++)
	    for (int a = 4; a < 676; a++)
	    {
	      
	      C[a][b]=C[a-3][b-4]-A[a][b]/B[a];
	      
	      A[a][b]=A[a-4][b-5]-0.729;
	      
	      B[a]=0.61;
	      float  var_a=B[a]*0.233;
	      
	      C[a][b]=0.842;
	      
	      double var_b=A[a][b]+0.853;
	      double var_c=A[a+4][b]-0.291;
	    }

    return 0;
}