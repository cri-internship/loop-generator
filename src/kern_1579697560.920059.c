#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(820, "zeros");
	float *B = create_one_dim_float(160, "zeros");
	float *C = create_one_dim_float(10, "zeros");
	float ***E = create_three_dim_float(160, 120, 260, "zeros");
	float *A = create_one_dim_float(240, "zeros");

	for (int b = 0; b < 120; b++)
	  for (int a = 4; a < 10; a++)
	  {
	    
	     B[a]=B[a-4]*0.821;
	    
	     D[a]=D[a-3]*B[a]-0.142+C[a]/E[a][b][a];
	    
	     C[a]=C[a-2]/D[a]*A[a];
	    
	     E[a][b][a]=0.286;
	     E[a+3][b][a+4]=0.993;
	    
	     A[a]=C[a];
	     A[a+3]=D[a]+B[a];
	    
	     float var_a=A[a]-0.006;
	     float var_b=A[a-4]+0.454;
	  }

    return 0;
}