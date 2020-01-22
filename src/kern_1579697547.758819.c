#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(50, 590, 310, "zeros");
	double *C = create_one_dim_double(950, "zeros");
	double *B = create_one_dim_double(510, "zeros");

	for (int a = 5; a < 50; a++)
	{
	  
	    C[a]=0.551;
	    float  var_a=C[a]/0.307;
	  
	    B[a]=B[a-1]/0.607;
	  
	    A[a][a][a]=0.432;
	    A[a-5][a-3][a-3]=0.347;
	  
	    A[a][a][a]=B[a]*C[a]-A[a][a][a];
	    B[a]=B[a-5]+C[a];
	  
	    double var_b=B[a]-0.415;
	}

    return 0;
}