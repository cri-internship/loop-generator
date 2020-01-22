#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(690, 730, 250, "zeros");
	float ***A = create_three_dim_float(430, 120, 420, "zeros");
	float *B = create_one_dim_float(140, "zeros");

	for (int b = 2; b < 116; b++)
	  for (int a = 4; a < 140; a++)
	  {
	    
	     C[a][b][a]=C[a-3][b-1][a-4]/0.864;
	    
	     B[a]=B[a-2]/0.311;
	    
	     C[a][b][a]=C[a-3][b-2][a-1]/0.496-A[a][b][a];
	    
	     A[a][b][a]=A[a+5][b+4][a+5]+0.194*C[a][b][a];
	  }

    return 0;
}