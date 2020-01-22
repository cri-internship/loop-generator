#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(270, "ones");
	float **B = create_two_dim_float(530, 210, "ones");
	float *C = create_one_dim_float(670, "ones");
	float ***D = create_three_dim_float(950, 30, 530, "ones");

	for (int b = 4; b < 210; b++)
	  for (int a = 3; a < 270; a++)
	  {
	    
	     A[a]=A[a-1]/0.648;
	    
	     B[a][b]=0.501;
	     B[a-3][b-4]=0.603;
	    
	     D[a][b][a]=C[a]-0.431;
	     A[a]=C[a+4]-A[a]/B[a][b]*B[a][b];
	  }

    return 0;
}