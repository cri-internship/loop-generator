#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(690, "random");
	float *A = create_one_dim_float(870, "random");
	float **C = create_two_dim_float(820, 50, "random");
	float **D = create_two_dim_float(120, 100, "random");

	for (int a = 5; a < 120; a++)
	{
	  
	    C[a][a]=0.476;
	    float  var_a=C[a][a]+0.362;
	  
	    C[a][a]=A[a];
	  
	    D[a][a]=0.79;
	    D[a-1][a-4]=0.416;
	  
	    float var_b=A[a]+0.801;
	    float var_c=A[a+3]/0.791;
	}

    return 0;
}