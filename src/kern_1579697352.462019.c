#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(30, "random");
	double **B = create_two_dim_double(350, 830, "random");
	double *D = create_one_dim_double(860, "random");
	double **C = create_two_dim_double(350, 580, "random");

	for (int a = 5; a < 29; a++)
	{
	  
	    B[a][a]=B[a-3][a]*0.661;
	  
	    B[a][a]=B[a+5][a+1]*A[a];
	  
	    D[a]=D[a+3]/0.211;
	  
	    A[a]=A[a+1]*0.12;
	  
	    C[a][a]=B[a][a]/C[a][a]-A[a];
	    B[a][a]=B[a][a+2]/D[a];
	  
	    double var_a=B[a][a]+0.787;
	    double var_b=B[a+4][a]*0.123;
	}

    return 0;
}