#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(30, 500, "zeros");
	double ***C = create_three_dim_double(90, 560, 360, "zeros");
	double *A = create_one_dim_double(860, "zeros");

	for (int a = 5; a < 26; a++)
	{
	  
	    A[a]=A[a-5]/0.958;
	  
	    B[a][a]=B[a-3][a-3]*A[a];
	  
	    C[a][a][a]=0.51;
	    C[a-1][a-4][a-5]=0.08;
	  
	    B[a][a]=0.333;
	}

    return 0;
}