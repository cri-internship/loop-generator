#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(800, "zeros");
	double ***B = create_three_dim_double(20, 230, 10, "zeros");
	double **A = create_two_dim_double(610, 990, "zeros");

	for (int a = 5; a < 610; a++)
	{
	  
	    A[a][a]=A[a-4][a-3]*B[a][a][a]-C[a];
	  
	    C[a]=C[a+4]*A[a][a];
	  
	    C[a]=A[a][a]*B[a][a][a];
	  
	    double var_a=A[a][a]/0.051;
	    double var_b=A[a-4][a]-0.245;
	}

    return 0;
}