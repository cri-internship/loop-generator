#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(430, "ones");
	double ***A = create_three_dim_double(410, 670, 760, "ones");
	double **C = create_two_dim_double(950, 700, "ones");

	for (int a = 5; a < 410; a++)
	{
	  
	    A[a][a][a]=A[a-1][a-3][a-3]/0.749;
	  
	    C[a][a]=C[a-5][a-2]*0.999;
	  
	    B[a]=0.644;
	    B[a]=A[a][a][a]*A[a][a][a];
	  
	    double var_a=A[a][a][a]/0.601;
	    double var_b=A[a-4][a][a-4]-0.153;
	}

    return 0;
}