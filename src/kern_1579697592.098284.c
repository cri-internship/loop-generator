#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(990, "zeros");
	float ***B = create_three_dim_float(40, 760, 410, "zeros");
	float *A = create_one_dim_float(370, "zeros");

	for (int b = 0; b < 758; b++)
	  for (int a = 1; a < 36; a++)
	  {
	    
	     C[a]=A[a];
	     C[a-1]=B[a][b][a]+B[a][b][a];
	    
	     A[a]=B[a][b][a]+0.668/A[a];
	     C[a]=B[a+2][b+2][a+4]/C[a];
	  }

    return 0;
}