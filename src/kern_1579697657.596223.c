#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(800, 450, 730, "zeros");
	float ***C = create_three_dim_float(190, 790, 460, "zeros");
	float **B = create_two_dim_float(860, 90, "zeros");

	for (int a = 4; a < 190; a++)
	{
	  
	    C[a][a][a]=C[a-3][a][a-4]+A[a][a][a];
	  
	    A[a][a][a]=A[a+1][a][a]-0.985;
	  
	    B[a][a]=B[a+2][a+3]-C[a][a][a]+C[a][a][a];
	}

    return 0;
}