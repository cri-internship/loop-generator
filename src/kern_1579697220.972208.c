#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(600, "random");
	double ***B = create_three_dim_double(660, 540, 430, "random");

	for (int a = 0; a < 595; a++)
	{
	  
	    B[a][a][a]=B[a+4][a+1][a+1]-0.212;
	  
	    A[a]=B[a][a][a];
	    A[a+5]=0.199;
	  
	    B[a][a][a]=A[a];
	}

    return 0;
}