#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(930, 900, "zeros");
	double *A = create_one_dim_double(190, "zeros");
	double *D = create_one_dim_double(30, "zeros");
	double *E = create_one_dim_double(130, "zeros");
	double **B = create_two_dim_double(50, 70, "zeros");

	for (int a = 5; a < 30; a++)
	{
	  
	    D[a]=D[a-5]*A[a]-C[a][a];
	}

    return 0;
}