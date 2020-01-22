#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(720, 160, 370, "random");
	double *B = create_one_dim_double(740, "random");
	double ***C = create_three_dim_double(760, 560, 790, "random");

	for (int a = 3; a < 716; a++)
	{
	  
	    B[a]=B[a-3]+C[a][a][a];
	  
	    A[a][a][a]=A[a+3][a][a+4]-0.852;
	  
	    A[a][a][a]=A[a+4][a+1][a+4]*0.683;
	}

    return 0;
}