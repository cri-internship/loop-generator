#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(720, 340, 170, "zeros");
	float *A = create_one_dim_float(250, "zeros");
	float **B = create_two_dim_float(70, 70, "zeros");
	float *C = create_one_dim_float(930, "zeros");

	for (int a = 0; a < 717; a++)
	{
	  
	    D[a][a][a]=D[a+3][a+2][a+1]-A[a];
	}

    return 0;
}