#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(340, 440, 80, "ones");
	double **A = create_two_dim_double(220, 670, "ones");
	double **B = create_two_dim_double(1000, 290, "ones");

	for (int a = 5; a < 219; a++)
	{
	  
	    B[a][a]=B[a][a-2]-0.116;
	  
	    A[a][a]=A[a+1][a+1]/B[a][a];
	  
	    A[a][a]=C[a][a][a]-C[a][a][a];
	  
	    double var_a=B[a][a]-0.072;
	    double var_b=B[a-5][a-5]*0.134;
	  
	    B[a][a]=B[a][a]*A[a][a];
	    C[a][a][a]=B[a+1][a+5]/A[a][a];
	}

    return 0;
}