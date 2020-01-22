#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(70, 30, "random");
	float **D = create_two_dim_float(750, 290, "random");
	float ***C = create_three_dim_float(170, 500, 700, "random");
	float *A = create_one_dim_float(340, "random");

	for (int a = 1; a < 65; a++)
	{
	  
	    B[a][a]=B[a+1][a+5]+A[a]/D[a][a];
	  
	    A[a]=A[a+3]-0.554;
	  
	    B[a][a]=0.682;
	}

    return 0;
}