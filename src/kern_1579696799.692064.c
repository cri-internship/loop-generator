#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(970, "random");
	double ***B = create_three_dim_double(890, 310, 810, "random");

	for (int a = 3; a < 886; a++)
	{
	  
	    A[a]=A[a-3]-0.882;
	  
	    A[a]=A[a-2]*0.057;
	  
	    B[a][a][a]=B[a+4][a][a+3]+A[a];
	  
	    B[a][a][a]=0.686;
	}

    return 0;
}