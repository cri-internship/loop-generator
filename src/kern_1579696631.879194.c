#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(850, 240, "ones");
	float **C = create_two_dim_float(150, 260, "ones");
	float *E = create_one_dim_float(500, "ones");
	float *B = create_one_dim_float(830, "ones");
	float *A = create_one_dim_float(1000, "ones");

	for (int b = 0; b < 236; b++)
	  for (int a = 4; a < 148; a++)
	  {
	    
	     A[a]=D[a][b]/E[a]*B[a]-C[a][b];
	     E[a]=A[a]/C[a][b];
	    
	     C[a][b]=C[a+2][b+3]-0.966;
	    
	     B[a]=A[a]+0.239;
	     B[a-4]=D[a][b];
	    
	     B[a]=D[a][b]*E[a]/C[a][b];
	     D[a][b]=D[a+4][b+4]*E[a]+B[a];
	    
	     float var_a=C[a][b]+0.298;
	     float var_b=C[a+1][b+3]-0.981;
	  }

    return 0;
}