#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(40, "random");
	double *B = create_one_dim_double(330, "random");
	double **A = create_two_dim_double(670, 760, "random");
	double **D = create_two_dim_double(690, 90, "random");

	for (int a = 4; a < 35; a++)
	{
	  
	    B[a]=B[a-4]/0.937;
	  
	    B[a]=B[a+1]/0.035;
	  
	    C[a]=0.6;
	    C[a+5]=0.086;
	  
	    A[a][a]=D[a][a]*C[a];
	    A[a+2][a+2]=B[a]*D[a][a]-B[a];
	}

    return 0;
}