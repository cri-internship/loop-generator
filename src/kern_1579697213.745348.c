#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(760, 300, "zeros");
	float ***B = create_three_dim_float(650, 420, 940, "zeros");
	float **C = create_two_dim_float(690, 830, "zeros");

	for (int a = 4; a < 645; a++)
	{
	  
	    C[a][a]=C[a][a+1]-0.996;
	  
	    B[a][a][a]=B[a+5][a+3][a+3]/0.745;
	  
	    A[a][a]=B[a][a][a];
	    A[a-4][a-3]=C[a][a];
	}

    return 0;
}