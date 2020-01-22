#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(500, 510, 350, "ones");
	double **B = create_two_dim_double(560, 340, "ones");
	double *A = create_one_dim_double(970, "ones");

	for (int a = 5; a < 498; a++)
	{
	  
	    C[a][a][a]=C[a+1][a+2][a+2]/0.672;
	  
	    B[a][a]=0.633;
	    B[a-3][a-5]=0.322;
	}

    return 0;
}