#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(280, "ones");
	double *A = create_one_dim_double(190, "ones");
	double ***C = create_three_dim_double(250, 610, 450, "ones");

	for (int a = 4; a < 185; a++)
	{
	  
	    A[a]=A[a-3]+0.004;
	  
	    A[a]=A[a-4]+C[a][a][a]*B[a];
	  
	    A[a]=A[a+5]*0.737;
	  
	    C[a][a][a]=C[a+2][a+1][a+1]*A[a]/A[a];
	  
	    A[a]=A[a+3]+0.436;
	  
	    C[a][a][a]=C[a+1][a+5][a+4]*0.342;
	  
	    A[a]=C[a][a][a]/A[a]*0.979;
	    B[a]=C[a-4][a-4][a]-A[a];
	}

    return 0;
}