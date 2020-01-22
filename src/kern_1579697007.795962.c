#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(790, 700, "random");
	float *C = create_one_dim_float(860, "random");
	float **D = create_two_dim_float(860, 170, "random");
	float *E = create_one_dim_float(530, "random");
	float *B = create_one_dim_float(270, "random");

	for (int b = 2; b < 267; b++)
	  for (int a = 2; a < 267; a++)
	  {
	    
	     C[a]=0.446;
	     C[a-1]=0.115;
	    
	     B[a]=A[a][b];
	     B[a+3]=E[a]+D[a][b]/C[a]*D[a][b];
	    
	     E[a]=B[a]+D[a][b];
	     B[a]=B[a-2]/A[a][b]+0.832*C[a]-D[a][b];
	  }

    return 0;
}