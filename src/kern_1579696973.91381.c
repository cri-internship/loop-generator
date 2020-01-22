#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(480, 780, 900, "zeros");
	float **C = create_two_dim_float(530, 330, "zeros");
	float *E = create_one_dim_float(230, "zeros");
	float *A = create_one_dim_float(460, "zeros");
	float **D = create_two_dim_float(820, 970, "zeros");

	for (int c = 3; c < 460; c++)
	  for (int b = 3; b < 460; b++)
	    for (int a = 3; a < 460; a++)
	    {
	      
	      A[a]=A[a-3]-D[a][b];
	    }

    return 0;
}