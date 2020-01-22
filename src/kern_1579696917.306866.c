#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(510, "ones");
	double *D = create_one_dim_double(450, "ones");
	double **A = create_two_dim_double(660, 910, "ones");
	double *B = create_one_dim_double(920, "ones");

	for (int a = 4; a < 446; a++)
	{
	  
	    D[a]=D[a+4]*C[a]/B[a]-A[a][a];
	  
	    D[a]=0.312;
	  
	    A[a][a]=0.118;
	    A[a+3][a]=0.297;
	  
	    C[a]=D[a]+0.407;
	    C[a-3]=A[a][a]+D[a]-B[a];
	  
	    C[a]=B[a]*C[a];
	    D[a]=B[a-2]*D[a]-C[a]+A[a][a];
	  
	    B[a]=A[a][a]-B[a]/D[a];
	    A[a][a]=A[a][a-3]*C[a]+D[a];
	}

    return 0;
}