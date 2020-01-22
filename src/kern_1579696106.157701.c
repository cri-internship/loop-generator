#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(510, 50, 340, "zeros");
	float **A = create_two_dim_float(980, 40, "zeros");
	float *C = create_one_dim_float(780, "zeros");

	for (int b = 0; b < 780; b++)
	  for (int a = 0; a < 780; a++)
	  {
	    
	     C[a]=B[a][b][a]*0.19;
	     C[a]=A[a][b]-B[a][b][a];
	  }

    return 0;
}