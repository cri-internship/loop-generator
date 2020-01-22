#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(30, 50, "random");
	double *B = create_one_dim_double(140, "random");

	for (int a = 4; a < 136; a++)
	{
	  
	    B[a]=B[a-2]*0.68;
	  
	    B[a]=B[a+4]/0.695;
	  
	    double var_a=B[a]+0.825;
	    double var_b=B[a]-0.057;
	  
	    A[a][a]=B[a]/0.941;
	    B[a]=B[a+1]*A[a][a];
	  
	    double var_c=B[a]*0.057;
	    double var_d=B[a-4]+0.905;
	}

    return 0;
}