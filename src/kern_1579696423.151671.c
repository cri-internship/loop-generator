#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(280, "ones");
	float **B = create_two_dim_float(310, 510, "ones");
	float ***A = create_three_dim_float(890, 50, 560, "ones");
	float *D = create_one_dim_float(580, "ones");

	for (int b = 5; b < 50; b++)
	  for (int a = 5; a < 309; a++)
	  {
	    
	     A[a][b][a]=A[a-3][b-3][a-1]/D[a];
	    
	     B[a][b]=B[a-1][b-4]-A[a][b][a]/C[a]+A[a][b][a];
	    
	     A[a][b][a]=A[a-3][b-4][a-5]*0.393;
	    
	     A[a][b][a]=A[a-2][b-5][a-4]/B[a][b];
	    
	     B[a][b]=0.313;
	    
	     D[a]=A[a][b][a]-D[a];
	     B[a][b]=A[a-2][b-2][a-2]*B[a][b]+C[a];
	    
	     float var_a=B[a][b]+0.582;
	     float var_b=B[a-1][b-5]+0.19;
	  }

    return 0;
}