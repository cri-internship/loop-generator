#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(800, 420, 710, "ones");
	float ***A = create_three_dim_float(590, 510, 20, "ones");
	float *B = create_one_dim_float(60, "ones");

	for (int b = 5; b < 420; b++)
	  for (int a = 5; a < 60; a++)
	  {
	    
	     C[a][b][a]=C[a-1][b-3][a]+0.536;
	    
	     C[a][b][a]=C[a][b-5][a-1]-0.843;
	    
	     C[a][b][a]=C[a-4][b-2][a-5]-A[a][b][a]/B[a];
	    
	     A[a][b][a]=B[a]/C[a][b][a];
	     B[a]=B[a-3]/A[a][b][a];
	  }

    return 0;
}