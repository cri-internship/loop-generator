#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(240, 770, 240, "zeros");
	double *A = create_one_dim_double(650, "zeros");

	for (int a = 4; a < 236; a++)
	{
	  
	    A[a]=0.196;
	    A[a-4]=0.353;
	  
	    A[a]=B[a][a][a]+0.852;
	    B[a][a][a]=B[a+4][a][a+4]/A[a];
	}

    return 0;
}