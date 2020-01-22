#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(720, 510, "random");
	double **D = create_two_dim_double(220, 780, "random");
	double **B = create_two_dim_double(120, 650, "random");
	double *C = create_one_dim_double(980, "random");

	for (int a = 3; a < 120; a++)
	{
	  
	    C[a]=C[a+4]+A[a][a]*B[a][a];
	  
	    D[a][a]=D[a+1][a+1]*C[a]-B[a][a];
	  
	    B[a][a]=0.494;
	    B[a][a-3]=0.059;
	  
	    D[a][a]=A[a][a];
	}

    return 0;
}