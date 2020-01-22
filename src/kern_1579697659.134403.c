#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(930, 950, "zeros");
	float *D = create_one_dim_float(280, "zeros");
	float *B = create_one_dim_float(780, "zeros");
	float *C = create_one_dim_float(450, "zeros");

	for (int c = 0; c < 949; c++)
	  for (int b = 0; b < 280; b++)
	    for (int a = 0; a < 280; a++)
	    {
	      
	      A[a][b]=B[a]*A[a][b]-D[a];
	      B[a]=C[a]/0.144;
	      
	      float var_a=D[a]/0.377;
	      D[a]=0.839;
	      
	      A[a][b]=0.167;
	      
	      D[a]=B[a]/C[a]*D[a];
	      B[a]=B[a+3]+A[a][b];
	    }

    return 0;
}