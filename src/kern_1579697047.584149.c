#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(700, "ones");
	float **B = create_two_dim_float(540, 850, "ones");
	float *D = create_one_dim_float(10, "ones");
	float **A = create_two_dim_float(600, 580, "ones");
	float *E = create_one_dim_float(390, "ones");

	for (int b = 0; b < 577; b++)
	  for (int a = 0; a < 595; a++)
	  {
	    
	     A[a][b]=C[a]-D[a]/E[a]*B[a][b];
	     A[a+5][b+3]=0.153-D[a]/C[a];
	  }

    return 0;
}