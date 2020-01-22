#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(450, 390, "zeros");
	float ***B = create_three_dim_float(850, 380, 100, "zeros");
	float *D = create_one_dim_float(970, "zeros");
	float *C = create_one_dim_float(490, "zeros");

	for (int a = 0; a < 445; a++)
	{
	  
	    A[a][a]=0.291;
	    A[a][a]=0.16;
	  
	    B[a][a][a]=A[a][a]*D[a];
	    C[a]=A[a+5][a+3]+D[a]*C[a]-B[a][a][a];
	}

    return 0;
}