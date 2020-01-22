#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(450, 340, "zeros");
	float *D = create_one_dim_float(10, "zeros");
	float ***A = create_three_dim_float(500, 110, 830, "zeros");
	float **B = create_two_dim_float(110, 830, "zeros");
	float *C = create_one_dim_float(460, "zeros");

	for (int b = 2; b < 110; b++)
	  for (int a = 4; a < 10; a++)
	  {
	    
	     C[a]=C[a-3]/A[a][b][a]+B[a][b]-E[a][b];
	    
	     A[a][b][a]=A[a][b-2][a-4]+D[a]-C[a];
	    
	     A[a][b][a]=A[a][b-1][a-3]-B[a][b]*D[a]/E[a][b];
	    
	     D[a]=D[a-3]-0.818;
	    
	     B[a][b]=D[a]/B[a][b]-C[a];
	     C[a]=D[a-4]-C[a]+B[a][b]*E[a][b]/0.412;
	    
	     float var_a=A[a][b][a]*0.007;
	     float var_b=A[a-4][b-1][a-1]+0.132;
	  }

    return 0;
}