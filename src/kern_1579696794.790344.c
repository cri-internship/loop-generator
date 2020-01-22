#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(350, "ones");
	float **B = create_two_dim_float(560, 890, "ones");
	float **C = create_two_dim_float(320, 270, "ones");

	for (int c = 2; c < 268; c++)
	  for (int b = 4; b < 318; b++)
	    for (int a = 4; a < 318; a++)
	    {
	      
	      C[a][b]=C[a-2][b]*0.068/B[a][b];
	      
	      B[a][b]=B[a][b+2]*0.721;
	      
	      C[a][b]=C[a+2][b+2]-0.655;
	      
	      B[a][b]=B[a][b]-C[a][b]*0.235;
	      A[a]=B[a-4][b-2]/A[a]*0.513;
	    }

    return 0;
}