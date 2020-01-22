#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(700, 600, "random");
	double *B = create_one_dim_double(810, "random");
	double **D = create_two_dim_double(570, 150, "random");
	double *C = create_one_dim_double(950, "random");

	for (int a = 3; a < 570; a++)
	{
	  
	    D[a][a]=D[a-3][a-2]*0.903;
	  
	    C[a]=C[a-3]*A[a][a]+D[a][a];
	  
	    D[a][a]=D[a-2][a-2]/C[a]-B[a];
	  
	    B[a]=B[a+4]*0.732;
	  
	    A[a][a]=A[a][a]*D[a][a]/B[a];
	    D[a][a]=A[a+3][a+2]*B[a]+D[a][a]/C[a];
	}

    return 0;
}