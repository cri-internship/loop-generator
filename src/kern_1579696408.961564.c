#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(850, "ones");
	float ***D = create_three_dim_float(320, 850, 770, "ones");
	float *C = create_one_dim_float(620, "ones");
	float **B = create_two_dim_float(490, 900, "ones");

	for (int c = 0; c < 850; c++)
	  for (int b = 0; b < 850; b++)
	    for (int a = 0; a < 850; a++)
	    {
	      
	      D[a][b][c]=A[a]/C[a];
	      A[a]=A[a]-D[a][b][c];
	    }

    return 0;
}