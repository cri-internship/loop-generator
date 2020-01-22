#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(130, 690, "random");
	float **A = create_two_dim_float(420, 430, "random");
	float **C = create_two_dim_float(460, 990, "random");
	float *B = create_one_dim_float(560, "random");

	for (int c = 5; c < 425; c++)
	  for (int b = 5; b < 125; b++)
	    for (int a = 5; a < 125; a++)
	    {
	      
	      D[a][b]=D[a+5][b+4]-B[a]/A[a][b];
	      
	      A[a][b]=A[a+2][b+2]*D[a][b]/C[a][b];
	      
	      C[a][b]=C[a+2][b+2]+0.652;
	      
	      A[a][b]=A[a][b+5]-0.793;
	      
	      B[a]=A[a][b]+C[a][b]*D[a][b];
	      B[a-2]=C[a][b];
	      
	      float var_a=A[a][b]/0.864;
	      float var_b=A[a+4][b]-0.52;
	    }

    return 0;
}