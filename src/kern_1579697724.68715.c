#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(210, "random");
	double *B = create_one_dim_double(590, "random");
	double *C = create_one_dim_double(220, "random");
	double *D = create_one_dim_double(810, "random");

	for (int a = 3; a < 206; a++)
	{
	  
	    D[a]=B[a]+C[a]-A[a];
	    B[a]=D[a]*C[a];
	  
	    B[a]=0.982;
	  
	    A[a]=B[a]-B[a]*D[a];
	    A[a+4]=B[a]*C[a]/D[a];
	  
	    A[a]=A[a]+C[a];
	    B[a]=A[a+4]/B[a]-D[a];
	}

    return 0;
}