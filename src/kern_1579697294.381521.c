#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(930, "random");
	float ***B = create_three_dim_float(250, 120, 210, "random");
	float ***C = create_three_dim_float(970, 430, 110, "random");

	for (int b = 2; b < 120; b++)
	  for (int a = 5; a < 249; a++)
	  {
	    
	     A[a]=A[a-2]*0.281;
	    
	     C[a][b][a]=C[a-3][b-1][a-2]-B[a][b][a];
	    
	     B[a][b][a]=B[a-3][b-2][a-2]*A[a]/C[a][b][a];
	    
	     C[a][b][a]=C[a+5][b][a]-0.2;
	    
	     B[a][b][a]=C[a][b][a];
	    
	     float var_a=B[a][b][a]+0.799;
	     float var_b=B[a][b-1][a-5]+0.746;
	  }

    return 0;
}