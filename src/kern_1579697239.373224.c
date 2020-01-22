#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(370, 620, "random");
	float ***C = create_three_dim_float(640, 240, 470, "random");
	float *A = create_one_dim_float(890, "random");

	for (int a = 5; a < 366; a++)
	{
	  
	    A[a]=A[a+3]/C[a][a][a]+B[a][a];
	  
	    C[a][a][a]=0.236;
	    C[a+1][a+5][a+2]=0.249;
	  
	    C[a][a][a]=0.44;
	  
	    C[a][a][a]=B[a][a]/A[a]-A[a];
	    B[a][a]=B[a+4][a]+0.039;
	  
	    A[a]=A[a]*0.1;
	    B[a][a]=A[a+4]*0.365;
	}

    return 0;
}