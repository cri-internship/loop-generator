#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(140, "zeros");
	float *E = create_one_dim_float(760, "zeros");
	float **A = create_two_dim_float(70, 460, "zeros");
	float ***C = create_three_dim_float(980, 340, 620, "zeros");
	float **B = create_two_dim_float(160, 940, "zeros");

	for (int b = 0; b < 340; b++)
	  for (int a = 3; a < 756; a++)
	  {
	    
	     E[a]=D[a];
	     B[a][b]=E[a]*B[a][b]+C[a][b][a]-A[a][b]/D[a];
	    
	     E[a]=E[a+4]-C[a][b][a]*B[a][b]/A[a][b];
	    
	     C[a][b][a]=0.379;
	     C[a][b][a-3]=0.783;
	  }

    return 0;
}