#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(360, 820, "random");
	double **A = create_two_dim_double(970, 190, "random");
	double *B = create_one_dim_double(350, "random");
	double *C = create_one_dim_double(820, "random");

	for (int a = 3; a < 350; a++)
	{
	  
	    C[a]=C[a-2]/B[a]-A[a][a];
	  
	    A[a][a]=A[a-1][a-2]-D[a][a]*C[a];
	  
	    C[a]=C[a+1]+0.872;
	  
	    A[a][a]=A[a+2][a+3]*0.391;
	  
	    D[a][a]=B[a]/D[a][a];
	    B[a]=B[a]*D[a][a];
	  
	    C[a]=A[a][a]-B[a];
	    A[a][a]=A[a-3][a]+C[a];
	}

    return 0;
}