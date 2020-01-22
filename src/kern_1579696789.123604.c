#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(160, 350, 110, "random");
	double *A = create_one_dim_double(70, "random");

	for (int a = 1; a < 68; a++)
	{
	  
	    A[a]=A[a-1]/0.832;
	  
	    B[a][a][a]=0.859;
	    B[a+1][a+2][a+2]=0.172;
	  
	    A[a]=0.845;
	}

    return 0;
}