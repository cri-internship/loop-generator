#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(770, "random");
	float **A = create_two_dim_float(510, 980, "random");
	float **B = create_two_dim_float(70, 120, "random");

	for (int c = 1; c < 980; c++)
	  for (int b = 3; b < 510; b++)
	    for (int a = 3; a < 510; a++)
	    {
	      
	      A[a][b]=A[a-3][b-1]/B[a][b]*C[a];
	      
	      A[a][b]=A[a-2][b-1]/C[a]+B[a][b];
	      
	      C[a]=0.904;
	      C[a+1]=0.905;
	      
	      B[a][b]=C[a]/A[a][b]-A[a][b];
	      A[a][b]=C[a-2]-B[a][b];
	      
	      float var_a=A[a][b]+0.845;
	      float var_b=A[a-2][b]/0.345;
	    }

    return 0;
}