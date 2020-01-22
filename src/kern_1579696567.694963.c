#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(970, 100, 820, "zeros");
	float *A = create_one_dim_float(630, "zeros");
	float *B = create_one_dim_float(860, "zeros");

	for (int b = 0; b < 100; b++)
	  for (int a = 5; a < 629; a++)
	  {
	    
	     B[a]=B[a-5]+0.32;
	    
	     A[a]=0.629;
	     float  var_a=A[a]/0.624;
	    
	     A[a]=A[a+1]*C[a][b][a];
	    
	     B[a]=B[a+3]*0.442/A[a];
	    
	     C[a][b][a]=B[a];
	     C[a-1][b][a-5]=A[a]+B[a];
	    
	     A[a]=B[a]/C[a][b][a];
	     C[a][b][a]=B[a-2]+C[a][b][a]/A[a];
	  }

    return 0;
}