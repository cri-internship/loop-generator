#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(560, "ones");
	double ***B = create_three_dim_double(210, 700, 10, "ones");
	double *A = create_one_dim_double(410, "ones");
	double *C = create_one_dim_double(20, "ones");
	double **E = create_two_dim_double(910, 550, "ones");

	for (int a = 5; a < 410; a++)
	{
	  
	    D[a]=D[a-5]*C[a]+E[a][a]/A[a]-B[a][a][a];
	  
	    A[a]=0.599;
	    A[a-1]=0.95;
	}

    return 0;
}