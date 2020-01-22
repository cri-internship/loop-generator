#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(560, 890, "ones");
	double ***A = create_three_dim_double(210, 100, 80, "ones");

	for (int a = 3; a < 207; a++)
	{
	  
	    A[a][a][a]=A[a+3][a+1][a+3]/0.841;
	  
	    A[a][a][a]=B[a][a];
	  
	    double var_a=B[a][a]/0.537;
	    double var_b=B[a][a+2]/0.974;
	  
	    A[a][a][a]=B[a][a]+A[a][a][a];
	    B[a][a]=B[a-3][a-2]*A[a][a][a];
	}

    return 0;
}