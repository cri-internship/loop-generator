#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(170, 240, "zeros");
	double ***A = create_three_dim_double(260, 830, 360, "zeros");
	double *C = create_one_dim_double(110, "zeros");
	double *B = create_one_dim_double(430, "zeros");

	for (int a = 2; a < 105; a++)
	{
	  
	    C[a]=C[a-2]+B[a]*D[a][a]-A[a][a][a];
	  
	    double var_a=B[a]-0.18;
	    B[a]=0.817;
	  
	    C[a]=0.301;
	}

    return 0;
}