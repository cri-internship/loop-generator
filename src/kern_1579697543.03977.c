#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(570, 680, 880, "random");
	double **A = create_two_dim_double(550, 790, "random");

	for (int a = 5; a < 545; a++)
	{
	  
	    B[a][a][a]=B[a][a-3][a-2]-0.786;
	  
	    A[a][a]=A[a-1][a-5]*0.729;
	  
	    A[a][a]=A[a+5][a+2]+0.141;
	  
	    B[a][a][a]=0.107;
	  
	    B[a][a][a]=B[a][a][a]*0.603;
	    A[a][a]=B[a][a-2][a-2]+0.809;
	}

    return 0;
}