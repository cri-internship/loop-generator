#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(340, 700, 700, "ones");
	float *A = create_one_dim_float(260, "ones");
	float ***B = create_three_dim_float(650, 510, 800, "ones");

	for (int a = 3; a < 260; a++)
	{
	  
	    C[a][a][a]=C[a-1][a][a-1]*0.113;
	  
	    B[a][a][a]=B[a][a-3][a-2]/0.29;
	  
	    C[a][a][a]=C[a+5][a+5][a]+0.025;
	  
	    A[a]=0.852;
	    A[a-2]=0.469;
	}

    return 0;
}