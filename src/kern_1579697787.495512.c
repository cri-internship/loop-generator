#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(100, 440, 400, "random");
	float *A = create_one_dim_float(720, "random");
	float **B = create_two_dim_float(860, 610, "random");

	for (int a = 5; a < 95; a++)
	{
	  
	    B[a][a]=B[a-5][a-5]+C[a][a][a]*A[a];
	  
	    C[a][a][a]=C[a+4][a+2][a+4]/B[a][a]-A[a];
	  
	    C[a][a][a]=C[a+5][a+2][a+3]*0.91;
	  
	    B[a][a]=C[a][a][a]+A[a];
	  
	    float var_a=A[a]/0.543;
	    float var_b=A[a+2]-0.35;
	}

    return 0;
}