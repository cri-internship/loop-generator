#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(860, 130, "random");
	float ***A = create_three_dim_float(210, 880, 150, "random");
	float *B = create_one_dim_float(240, "random");
	float **D = create_two_dim_float(360, 660, "random");

	for (int b = 4; b < 130; b++)
	  for (int a = 5; a < 206; a++)
	  {
	    
	     B[a]=B[a-5]/0.89;
	    
	     A[a][b][a]=A[a+3][b][a+4]-B[a];
	    
	     B[a]=B[a+1]+A[a][b][a]-0.854;
	    
	     C[a][b]=0.172;
	     C[a-5][b-4]=B[a];
	    
	     float var_a=A[a][b][a]/0.346;
	     float var_b=A[a-4][b-3][a-1]-0.788;
	  }

    return 0;
}