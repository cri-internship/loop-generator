#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(650, "random");
	double **C = create_two_dim_double(320, 750, "random");
	double *A = create_one_dim_double(60, "random");

	for (int a = 1; a < 57; a++)
	{
	  
	    B[a]=B[a-1]+A[a]/C[a][a];
	  
	    A[a]=A[a-1]+B[a];
	  
	    B[a]=B[a+5]-A[a]*C[a][a];
	  
	    A[a]=A[a+3]-B[a]*C[a][a];
	  
	    C[a][a]=B[a]*0.177;
	    A[a]=B[a+2]*0.674;
	}

    return 0;
}