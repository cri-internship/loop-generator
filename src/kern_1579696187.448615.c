#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(50, 710, "zeros");
	double **C = create_two_dim_double(410, 670, "zeros");
	double ***A = create_three_dim_double(770, 20, 560, "zeros");
	double **D = create_two_dim_double(350, 770, "zeros");

	for (int a = 5; a < 410; a++)
	{
	  
	    C[a][a]=C[a-3][a-1]-D[a][a];
	  
	    C[a][a]=C[a-5][a-4]+B[a][a]/A[a][a][a];
	  
	    B[a][a]=A[a][a][a]/0.346;
	    A[a][a][a]=A[a+5][a+5][a+2]*D[a][a];
	}

    return 0;
}