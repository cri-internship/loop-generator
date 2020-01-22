#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(750, 580, 580, "zeros");
	double *B = create_one_dim_double(510, "zeros");
	double *A = create_one_dim_double(820, "zeros");

	for (int a = 5; a < 510; a++)
	{
	  
	    B[a]=B[a-5]-0.533;
	  
	    A[a]=A[a-3]/0.798;
	}

    return 0;
}