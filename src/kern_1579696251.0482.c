#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(680, "random");
	float **C = create_two_dim_float(10, 370, "random");
	float ***A = create_three_dim_float(340, 320, 630, "random");

	for (int a = 4; a < 335; a++)
	{
	  
	    A[a][a][a]=A[a-4][a-4][a]/C[a][a];
	  
	    A[a][a][a]=A[a+2][a+3][a+1]*0.5;
	  
	    A[a][a][a]=A[a+5][a+2][a+4]+B[a];
	  
	    B[a]=B[a]+A[a][a][a]/C[a][a];
	    C[a][a]=B[a+3]/0.183+A[a][a][a];
	}

    return 0;
}