#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(70, "random");
	float **B = create_two_dim_float(530, 180, "random");
	float *C = create_one_dim_float(400, "random");

	for (int c = 0; c < 177; c++)
	  for (int b = 2; b < 529; b++)
	    for (int a = 2; a < 529; a++)
	    {
	      
	      B[a][b]=B[a+1][b]*0.139;
	      
	      B[a][b]=0.974;
	      
	      B[a][b]=B[a][b]/C[a];
	      A[a]=B[a-2][b]-A[a]/C[a];
	    }

    return 0;
}