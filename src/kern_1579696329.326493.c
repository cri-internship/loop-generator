#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(380, "random");
	float ***C = create_three_dim_float(290, 560, 490, "random");
	float ***A = create_three_dim_float(840, 390, 170, "random");

	for (int a = 5; a < 285; a++)
	{
	  
	    A[a][a][a]=A[a-3][a-3][a-5]-B[a];
	  
	    C[a][a][a]=C[a+3][a+3][a+1]-0.315;
	  
	    C[a][a][a]=C[a+1][a][a+5]+0.472;
	}

    return 0;
}