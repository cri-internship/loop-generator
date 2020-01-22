#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(510, 380, "zeros");
	double **C = create_two_dim_double(670, 270, "zeros");
	double ***D = create_three_dim_double(890, 930, 270, "zeros");
	double **B = create_two_dim_double(590, 130, "zeros");

	for (int a = 5; a < 510; a++)
	{
	  
	    A[a][a]=A[a-4][a-5]*0.251;
	  
	    A[a][a]=A[a][a-4]-0.472;
	  
	    B[a][a]=B[a+2][a]-0.892;
	}

    return 0;
}