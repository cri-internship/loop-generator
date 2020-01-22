#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(130, 490, "zeros");
	float **B = create_two_dim_float(810, 900, "zeros");
	float *A = create_one_dim_float(660, "zeros");

	for (int b = 3; b < 490; b++)
	  for (int a = 3; a < 130; a++)
	  {
	    
	     C[a][b]=C[a-2][b-2]-B[a][b];
	    
	     A[a]=A[a]*C[a][b]/C[a][b];
	     A[a]=C[a][b]*B[a][b];
	    
	     B[a][b]=B[a][b+5]/0.354;
	    
	     float var_a=B[a][b]-0.413;
	     float var_b=B[a+3][b]+0.515;
	    
	     float var_c=C[a][b]+0.358;
	     float var_d=C[a-3][b-3]/0.96;
	  }

    return 0;
}