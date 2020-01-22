#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(80, 300, "random");
	double ***B = create_three_dim_double(10, 660, 500, "random");
	double *D = create_one_dim_double(330, "random");
	double *C = create_one_dim_double(550, "random");

	for (int a = 5; a < 6; a++)
	{
	  
	    A[a][a]=A[a-5][a-3]-0.102;
	  
	    B[a][a][a]=B[a+1][a+4][a+2]-0.368;
	  
	    B[a][a][a]=A[a][a]+C[a]/D[a];
	  
	    double var_a=B[a][a][a]*0.853;
	    double var_b=B[a-2][a-1][a-2]+0.748;
	}

    return 0;
}