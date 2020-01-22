#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(390, 660, "random");
	float *A = create_one_dim_float(130, "random");
	float *C = create_one_dim_float(640, "random");
	float ***B = create_three_dim_float(120, 940, 460, "random");

	for (int c = 3; c < 658; c++)
	  for (int b = 3; b < 130; b++)
	    for (int a = 3; a < 130; a++)
	    {
	      
	      D[a][b]=D[a-2][b-3]*0.741;
	      
	      A[a]=A[a-2]-0.329;
	      
	      D[a][b]=D[a+4][b+2]+0.019;
	      
	      D[a][b]=D[a+5][b+2]*B[a][b][c]-0.017/B[a][b][c];
	      
	      float var_a=C[a]-0.193;
	      float var_b=C[a-3]*0.525;
	    }

    return 0;
}