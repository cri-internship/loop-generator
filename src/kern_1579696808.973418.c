#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(770, 730, 140, "ones");
	double ***C = create_three_dim_double(140, 210, 40, "ones");
	double *B = create_one_dim_double(880, "ones");

	for (int a = 4; a < 140; a++)
	{
	  
	    B[a]=A[a][a][a];
	    B[a-2]=0.594;
	  
	    C[a][a][a]=C[a][a][a]+B[a]-B[a];
	    B[a]=C[a][a-2][a-4]+0.138;
	}

    return 0;
}