#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(340, 840, 940, "zeros");
	double *B = create_one_dim_double(460, "zeros");

	for (int a = 5; a < 340; a++)
	{
	  
	    A[a][a][a]=A[a][a-1][a-5]/B[a];
	  
	    B[a]=B[a+2]*0.978;
	}

    return 0;
}