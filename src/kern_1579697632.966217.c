#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(670, 700, "ones");
	double ***A = create_three_dim_double(550, 140, 330, "ones");

	for (int a = 5; a < 547; a++)
	{
	  
	    A[a][a][a]=A[a-2][a][a-2]-0.338;
	  
	    B[a][a]=B[a][a-2]*0.268;
	  
	    B[a][a]=B[a-2][a-4]-A[a][a][a];
	  
	    A[a][a][a]=0.741;
	  
	    double var_a=B[a][a]-0.691;
	    double var_b=B[a+2][a+2]+0.464;
	  
	    A[a][a][a]=B[a][a]*A[a][a][a];
	    B[a][a]=B[a-5][a-5]-A[a][a][a];
	}

    return 0;
}