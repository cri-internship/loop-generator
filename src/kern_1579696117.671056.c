#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(420, 240, "zeros");
	double *A = create_one_dim_double(280, "zeros");
	double ***C = create_three_dim_double(870, 470, 280, "zeros");

	for (int a = 2; a < 280; a++)
	{
	  
	    double var_a=A[a]-0.089;
	    double var_b=A[a-2]*0.014;
	}

    return 0;
}