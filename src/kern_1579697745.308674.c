#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(250, 610, 570, "zeros");
	float *A = create_one_dim_float(990, "zeros");

	for (int a = 5; a < 245; a++)
	{
	  
	    A[a]=A[a-3]/0.858;
	  
	    B[a][a][a]=B[a-5][a-5][a-4]+0.506;
	  
	    B[a][a][a]=B[a-4][a][a]*A[a];
	  
	    B[a][a][a]=B[a+5][a][a+5]/0.681;
	  
	    A[a]=A[a+3]+0.089;
	  
	    A[a]=A[a]*B[a][a][a];
	}

    return 0;
}