#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(140, 230, "ones");
	float **B = create_two_dim_float(950, 610, "ones");
	float ***A = create_three_dim_float(1000, 420, 690, "ones");
	float *C = create_one_dim_float(570, "ones");

	for (int a = 3; a < 136; a++)
	{
	  
	    A[a][a][a]=A[a-3][a][a-1]/D[a][a];
	  
	    D[a][a]=D[a-3][a-1]/B[a][a]-C[a]*A[a][a][a];
	  
	    D[a][a]=D[a+1][a]/0.902;
	  
	    D[a][a]=D[a+4][a+4]/0.242;
	  
	    A[a][a][a]=A[a+1][a][a+5]+0.502;
	  
	    float var_a=B[a][a]*0.583;
	    float var_b=B[a+4][a+4]*0.737;
	}

    return 0;
}