#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(340, "random");
	double *C = create_one_dim_double(160, "random");
	double ***D = create_three_dim_double(10, 530, 910, "random");
	double **B = create_two_dim_double(410, 640, "random");

	for (int a = 4; a < 10; a++)
	{
	  
	    D[a][a][a]=D[a-3][a][a-4]*C[a];
	  
	    D[a][a][a]=A[a]-B[a][a]*D[a][a][a];
	    A[a]=A[a-4]+0.221;
	  
	    C[a]=A[a]-C[a]/D[a][a][a]*B[a][a];
	    B[a][a]=A[a+5]+0.251;
	  
	    double var_a=A[a]/0.737;
	    double var_b=A[a+4]/0.306;
	}

    return 0;
}