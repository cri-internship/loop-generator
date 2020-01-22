#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(120, "ones");
	float *B = create_one_dim_float(940, "ones");
	float **E = create_two_dim_float(800, 120, "ones");
	float **C = create_two_dim_float(1000, 820, "ones");
	float **D = create_two_dim_float(620, 140, "ones");

	for (int c = 1; c < 116; c++)
	  for (int b = 2; b < 120; b++)
	    for (int a = 2; a < 120; a++)
	    {
	      
	      A[a]=A[a-2]+D[a][b];
	      
	      E[a][b]=E[a+5][b+4]/0.418;
	      
	      D[a][b]=0.379;
	      D[a-1][b-1]=0.258;
	      
	      C[a][b]=0.378;
	      C[a-2][b-1]=0.752;
	    }

    return 0;
}