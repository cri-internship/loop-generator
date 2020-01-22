#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(500, 40, 920, "ones");
	double **A = create_two_dim_double(370, 840, "ones");
	double *B = create_one_dim_double(940, "ones");

	for (int a = 4; a < 495; a++)
	{
	  
	    B[a]=B[a-4]+0.454;
	  
	    C[a][a][a]=0.191;
	    C[a+3][a+5][a+4]=0.105;
	  
	    C[a][a][a]=C[a][a][a]+A[a][a];
	    B[a]=C[a+1][a+1][a+3]-B[a]*0.969;
	}

    return 0;
}