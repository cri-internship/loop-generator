#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(760, 610, "ones");
	double **D = create_two_dim_double(880, 790, "ones");
	double *C = create_one_dim_double(10, "ones");
	double *B = create_one_dim_double(180, "ones");
	double *A = create_one_dim_double(550, "ones");

	for (int a = 5; a < 178; a++)
	{
	  
	    D[a][a]=D[a][a+2]-0.795;
	  
	    B[a]=B[a+2]+0.79;
	  
	    E[a][a]=B[a];
	    E[a-5][a-1]=0.219;
	  
	    E[a][a]=0.147;
	  
	    A[a]=0.859;
	    A[a+1]=C[a]+0.001*B[a]-C[a];
	  
	    B[a]=0.113;
	}

    return 0;
}