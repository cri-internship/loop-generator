#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(690, 540, "random");
	float *C = create_one_dim_float(120, "random");
	float *A = create_one_dim_float(240, "random");
	float **D = create_two_dim_float(960, 270, "random");
	float *E = create_one_dim_float(350, "random");

	for (int c = 0; c < 266; c++)
	  for (int b = 1; b < 120; b++)
	    for (int a = 1; a < 120; a++)
	    {
	      
	      D[a][b]=D[a][b+4]*E[a]-C[a]/B[a][b]+A[a];
	      
	      D[a][b]=A[a]+0.587-E[a]/B[a][b];
	      
	      C[a]=0.285;
	      C[a-1]=0.041;
	    }

    return 0;
}