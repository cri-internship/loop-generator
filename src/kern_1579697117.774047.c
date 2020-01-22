#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(760, 960, "zeros");
	double ***A = create_three_dim_double(870, 190, 1000, "zeros");

	for (int a = 4; a < 755; a++)
	{
	  
	    B[a][a]=B[a][a+5]*0.831;
	  
	    B[a][a]=A[a][a][a];
	  
	    A[a][a][a]=0.661;
	    A[a+1][a+4][a+3]=0.019;
	  
	    A[a][a][a]=0.7;
	  
	    double var_a=B[a][a]*0.323;
	    double var_b=B[a+5][a+5]/0.421;
	}

    return 0;
}