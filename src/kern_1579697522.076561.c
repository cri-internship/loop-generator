#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(570, "zeros");
	double ***A = create_three_dim_double(320, 670, 880, "zeros");
	double **B = create_two_dim_double(740, 880, "zeros");
	double ***E = create_three_dim_double(390, 300, 940, "zeros");
	double *C = create_one_dim_double(440, "zeros");

	for (int a = 5; a < 315; a++)
	{
	  
	    A[a][a][a]=A[a][a-2][a-5]*E[a][a][a]-B[a][a];
	  
	    A[a][a][a]=A[a+4][a+5][a+5]*D[a]+C[a];
	  
	    C[a]=C[a+2]+A[a][a][a]-D[a]/A[a][a][a];
	  
	    E[a][a][a]=A[a][a][a]-E[a][a][a];
	    D[a]=A[a+2][a+4][a+3]+D[a];
	}

    return 0;
}