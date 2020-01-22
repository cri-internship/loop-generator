#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(310, "ones");
	float ***B = create_three_dim_float(570, 730, 980, "ones");
	float ***A = create_three_dim_float(340, 860, 170, "ones");
	float ***C = create_three_dim_float(810, 50, 120, "ones");

	for (int a = 3; a < 335; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-3][a-2]/0.428;
	  
	    C[a][a][a]=C[a+5][a+5][a+2]*0.991;
	  
	    A[a][a][a]=A[a+1][a+4][a+5]+0.773;
	}

    return 0;
}