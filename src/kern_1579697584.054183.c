#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(840, 970, "random");
	float **C = create_two_dim_float(820, 970, "random");
	float *A = create_one_dim_float(640, "random");

	for (int a = 3; a < 636; a++)
	{
	  
	    B[a][a]=B[a-3][a-2]/0.05;
	  
	    B[a][a]=B[a-2][a-2]-0.475;
	  
	    C[a][a]=0.449;
	    float  var_a=C[a][a]/0.314;
	  
	    A[a]=A[a+4]+C[a][a];
	  
	    A[a]=0.169;
	}

    return 0;
}