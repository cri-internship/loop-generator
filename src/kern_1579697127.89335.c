#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(720, 950, "zeros");
	double *B = create_one_dim_double(200, "zeros");
	double *C = create_one_dim_double(680, "zeros");
	double *D = create_one_dim_double(450, "zeros");

	for (int a = 5; a < 198; a++)
	{
	  
	    D[a]=D[a-5]-0.027;
	  
	    D[a]=D[a+1]+0.072;
	  
	    C[a]=C[a]-D[a]*A[a][a];
	    D[a]=C[a-5]+B[a]*B[a]/A[a][a];
	  
	    A[a][a]=B[a]*C[a]/C[a]+D[a];
	    B[a]=B[a+2]-C[a];
	  
	    C[a]=B[a]+0.292-C[a]/D[a];
	    B[a]=B[a-4]-D[a]/C[a]+A[a][a];
	}

    return 0;
}