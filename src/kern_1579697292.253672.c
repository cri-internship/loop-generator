#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(460, 290, 920, "zeros");
	float *D = create_one_dim_float(270, "zeros");
	float *A = create_one_dim_float(240, "zeros");
	float *B = create_one_dim_float(270, "zeros");

	for (int b = 0; b < 288; b++)
	  for (int a = 2; a < 236; a++)
	  {
	    
	     B[a]=D[a];
	     C[a][b][a]=B[a]*A[a];
	    
	     A[a]=B[a]/C[a][b][a]*C[a][b][a];
	     B[a]=D[a]*A[a];
	    
	     C[a][b][a]=C[a+4][b+2][a+4]/0.394;
	    
	     A[a]=0.669;
	    
	     float var_a=D[a]*0.123;
	     float var_b=D[a+2]*0.14;
	    
	     float var_c=B[a]+0.315;
	     float var_d=B[a-2]/0.254;
	  }

    return 0;
}