#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(820, "zeros");
	float *A = create_one_dim_float(500, "zeros");
	float **B = create_two_dim_float(530, 940, "zeros");
	float ***C = create_three_dim_float(60, 300, 940, "zeros");

	for (int b = 3; b < 300; b++)
	  for (int a = 5; a < 60; a++)
	  {
	    
	     B[a][b]=B[a-5][b-2]-0.252;
	    
	     C[a][b][a]=C[a-4][b-3][a-3]-0.855;
	    
	     D[a]=0.561;
	     D[a-5]=0.728;
	    
	     B[a][b]=C[a][b][a];
	  }

    return 0;
}