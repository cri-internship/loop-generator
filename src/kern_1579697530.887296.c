#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(510, "random");
	double *C = create_one_dim_double(890, "random");
	double ***D = create_three_dim_double(40, 100, 110, "random");
	double *B = create_one_dim_double(680, "random");

	for (int a = 2; a < 886; a++)
	{
	  
	    C[a]=C[a+2]-D[a][a][a];
	  
	    double var_a=C[a]-0.666;
	    double var_b=C[a+4]+0.887;
	  
	    double var_c=C[a]-0.968;
	    double var_d=C[a-2]*0.665;
	}

    return 0;
}