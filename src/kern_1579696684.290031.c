#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(130, 780, 970, "zeros");
	double *A = create_one_dim_double(40, "zeros");

	for (int a = 4; a < 36; a++)
	{
	  
	    A[a]=0.376;
	    A[a-4]=0.77;
	  
	    double var_a=A[a]-0.617;
	    double var_b=A[a+4]-0.441;
	}

    return 0;
}