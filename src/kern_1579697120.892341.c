#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(150, "ones");
	float *D = create_one_dim_float(390, "ones");
	float ***B = create_three_dim_float(680, 920, 210, "ones");
	float ***A = create_three_dim_float(510, 420, 810, "ones");

	for (int b = 5; b < 420; b++)
	  for (int a = 4; a < 390; a++)
	  {
	    
	     B[a][b][a]=B[a][b][a+3]-0.276;
	    
	     D[a]=A[a][b][a];
	     D[a-4]=0.348;
	    
	     C[a]=A[a][b][a]-D[a]+C[a]*D[a];
	     D[a]=A[a-4][b-5][a-2]-0.975+D[a]/B[a][b][a];
	    
	     float var_a=B[a][b][a]/0.315;
	     float var_b=B[a+3][b+1][a+3]/0.566;
	  }

    return 0;
}