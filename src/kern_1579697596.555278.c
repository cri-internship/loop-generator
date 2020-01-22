#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(210, 620, 290, "ones");
	float **A = create_two_dim_float(730, 350, "ones");
	float **B = create_two_dim_float(200, 180, "ones");

	for (int a = 5; a < 200; a++)
	{
	  
	    A[a][a]=A[a-2][a-3]-0.527;
	  
	    C[a][a][a]=0.353;
	    C[a+5][a+1][a+4]=0.721;
	  
	    A[a][a]=0.73;
	  
	    B[a][a]=A[a][a];
	    B[a-4][a-2]=C[a][a][a];
	}

    return 0;
}