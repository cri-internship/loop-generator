#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(870, "zeros");
	float ***C = create_three_dim_float(960, 420, 200, "zeros");
	float *A = create_one_dim_float(20, "zeros");

	for (int b = 0; b < 419; b++)
	  for (int a = 3; a < 20; a++)
	  {
	    
	     A[a]=A[a-3]-B[a]+C[a][b][a];
	    
	     C[a][b][a]=C[a][b+1][a+4]+A[a];
	    
	     B[a]=A[a];
	     B[a+2]=C[a][b][a]-A[a];
	  }

    return 0;
}