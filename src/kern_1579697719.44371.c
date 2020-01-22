#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(630, 160, "zeros");
	double **A = create_two_dim_double(580, 950, "zeros");
	double ***C = create_three_dim_double(410, 970, 900, "zeros");

	for (int a = 5; a < 406; a++)
	{
	  
	    C[a][a][a]=C[a][a+4][a+4]*0.1;
	  
	    A[a][a]=A[a+3][a+4]-0.064;
	  
	    A[a][a]=C[a][a][a];
	  
	    B[a][a]=0.916;
	    B[a-5][a-4]=0.046;
	  
	    C[a][a][a]=0.421;
	  
	    double var_a=C[a][a][a]/0.661;
	    double var_b=C[a-5][a-2][a-4]+0.751;
	}

    return 0;
}