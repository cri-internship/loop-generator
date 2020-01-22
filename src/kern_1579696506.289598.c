#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(120, "zeros");
	float **C = create_two_dim_float(770, 50, "zeros");
	float *A = create_one_dim_float(480, "zeros");
	float *D = create_one_dim_float(840, "zeros");
	float **E = create_two_dim_float(250, 840, "zeros");

	for (int b = 3; b < 840; b++)
	  for (int a = 5; a < 115; a++)
	  {
	    
	     B[a]=B[a-2]*0.193;
	    
	     B[a]=D[a]/A[a]-C[a][b]+E[a][b];
	    
	     E[a][b]=B[a]+C[a][b];
	     E[a-5][b-3]=D[a];
	  }

    return 0;
}