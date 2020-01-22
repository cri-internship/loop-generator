#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(290, 790, 600, "random");
	double *A = create_one_dim_double(510, "random");
	double *B = create_one_dim_double(460, "random");

	for (int a = 5; a < 460; a++)
	{
	  
	    A[a]=A[a-3]+C[a][a][a]-B[a];
	  
	    B[a]=0.414;
	    B[a-5]=C[a][a][a];
	  
	    B[a]=0.638;
	  
	    B[a]=A[a]*B[a]+C[a][a][a];
	    A[a]=A[a+1]+C[a][a][a];
	  
	    C[a][a][a]=A[a]-C[a][a][a]+B[a];
	    C[a][a][a]=A[a-1]-C[a][a][a]*B[a];
	}

    return 0;
}