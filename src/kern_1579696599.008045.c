#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(450, "zeros");
	double **C = create_two_dim_double(210, 690, "zeros");
	double ***B = create_three_dim_double(480, 80, 20, "zeros");
	double **D = create_two_dim_double(420, 510, "zeros");

	for (int a = 0; a < 447; a++)
	{
	  
	    A[a]=A[a+3]+0.899;
	}

    return 0;
}