#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(320, 940, "ones");
	float *C = create_one_dim_float(930, "ones");
	float **A = create_two_dim_float(570, 60, "ones");
	float *D = create_one_dim_float(730, "ones");

	for (int b = 5; b < 60; b++)
	  for (int a = 2; a < 319; a++)
	  {
	    
	     C[a]=C[a-2]*0.659;
	    
	     C[a]=C[a+2]+0.451;
	    
	     D[a]=C[a]/A[a][b];
	     D[a-1]=B[a][b]/B[a][b];
	    
	     D[a]=C[a]-B[a][b];
	    
	     D[a]=A[a][b]+D[a]*D[a]/C[a];
	     C[a]=A[a-2][b-5]-C[a]/B[a][b]+D[a];
	    
	     float var_a=B[a][b]/0.701;
	     float var_b=B[a+1][b+1]/0.582;
	  }

    return 0;
}