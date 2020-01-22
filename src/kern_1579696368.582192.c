#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(120, 780, "zeros");
	double **A = create_two_dim_double(400, 710, "zeros");

	for (int a = 2; a < 115; a++)
	{
	  
	    B[a][a]=B[a][a-2]+A[a][a];
	  
	    A[a][a]=A[a+2][a]-0.693;
	  
	    A[a][a]=B[a][a];
	  
	    B[a][a]=B[a][a]-A[a][a];
	    A[a][a]=B[a+3][a+5]*A[a][a];
	  
	    A[a][a]=A[a][a]*B[a][a];
	    A[a][a]=A[a-1][a]-B[a][a];
	  
	    double var_a=A[a][a]+0.656;
	    double var_b=A[a][a-1]-0.116;
	}

    return 0;
}