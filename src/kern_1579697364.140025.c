#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(730, 880, 950, "zeros");
	float *B = create_one_dim_float(900, "zeros");
	float **A = create_two_dim_float(880, 910, "zeros");

	for (int a = 4; a < 725; a++)
	{
	  
	    C[a][a][a]=C[a-2][a-4][a-1]/0.603;
	  
	    C[a][a][a]=C[a][a+4][a+5]*A[a][a]/B[a];
	  
	    A[a][a]=A[a+1][a]/0.714;
	  
	    A[a][a]=0.6;
	  
	    B[a]=A[a][a];
	    B[a+5]=C[a][a][a];
	}

    return 0;
}