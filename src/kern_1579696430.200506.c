#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(640, 330, "zeros");
	float *C = create_one_dim_float(990, "zeros");
	float ***B = create_three_dim_float(90, 320, 50, "zeros");
	float *A = create_one_dim_float(990, "zeros");

	for (int c = 3; c < 330; c++)
	  for (int b = 2; b < 640; b++)
	    for (int a = 2; a < 640; a++)
	    {
	      
	      A[a]=A[a-2]*0.561;
	      
	      D[a][b]=D[a][b-1]-A[a]+C[a];
	      
	      A[a]=B[a][b][c]-D[a][b];
	      
	      D[a][b]=B[a][b][c]+A[a];
	      
	      float var_a=C[a]+0.869;
	      float var_b=C[a-1]+0.854;
	    }

    return 0;
}