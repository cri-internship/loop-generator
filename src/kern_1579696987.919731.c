#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(480, "random");
	double **B = create_two_dim_double(510, 550, "random");
	double *D = create_one_dim_double(750, "random");
	double **C = create_two_dim_double(60, 90, "random");

	for (int a = 3; a < 56; a++)
	{
	  
	    D[a]=D[a-3]*0.262;
	  
	    C[a][a]=C[a][a+2]+0.274;
	  
	    D[a]=0.682;
	  
	    A[a]=D[a];
	    A[a]=C[a][a];
	  
	    D[a]=C[a][a]/A[a]*D[a];
	    B[a][a]=C[a+4][a+3]+D[a]/B[a][a]*A[a];
	}

    return 0;
}