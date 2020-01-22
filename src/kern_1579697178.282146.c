#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(230, "random");
	float *D = create_one_dim_float(410, "random");
	float *B = create_one_dim_float(780, "random");
	float ***C = create_three_dim_float(210, 350, 970, "random");

	for (int b = 2; b < 350; b++)
	  for (int a = 4; a < 210; a++)
	  {
	    
	     A[a]=A[a-4]-D[a]+B[a]/C[a][b][a];
	    
	     B[a]=B[a+2]-0.407;
	    
	     A[a]=A[a+3]*C[a][b][a]-D[a]/B[a];
	    
	     D[a]=A[a];
	     D[a]=B[a]+C[a][b][a];
	    
	     C[a][b][a]=0.897;
	     C[a][b-2][a-1]=0.809;
	    
	     C[a][b][a]=A[a]-D[a];
	     A[a]=A[a-1]/0.798+B[a];
	    
	     float var_a=D[a]-0.521;
	     float var_b=D[a-3]-0.659;
	  }

    return 0;
}