#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(280, 760, 810, "random");
	double *A = create_one_dim_double(550, "random");
	double ***D = create_three_dim_double(230, 20, 260, "random");
	double **C = create_two_dim_double(460, 80, "random");

	for (int a = 4; a < 275; a++)
	{
	  
	    C[a][a]=C[a-4][a-4]-A[a]*B[a][a][a];
	  
	    A[a]=A[a-2]-0.184;
	  
	    B[a][a][a]=B[a+4][a+5][a]*0.208;
	  
	    A[a]=0.733;
	  
	    C[a][a]=B[a][a][a]-D[a][a][a]+A[a];
	}

    return 0;
}