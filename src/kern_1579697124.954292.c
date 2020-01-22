#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(650, 650, "zeros");
	double **D = create_two_dim_double(10, 180, "zeros");
	double **B = create_two_dim_double(120, 250, "zeros");
	double *C = create_one_dim_double(230, "zeros");
	double ***E = create_three_dim_double(690, 340, 100, "zeros");

	for (int a = 0; a < 7; a++)
	{
	  
	    D[a][a]=D[a][a+3]-B[a][a]/E[a][a][a]*C[a];
	  
	    C[a]=C[a]*D[a][a]/A[a][a]+A[a][a]-E[a][a][a];
	    B[a][a]=C[a+5]+0.157;
	}

    return 0;
}