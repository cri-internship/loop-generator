#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(80, 350, 500, "ones");
	float **A = create_two_dim_float(760, 360, "ones");

	for (int a = 5; a < 75; a++)
	{
	  
	    B[a][a][a]=B[a-4][a][a-5]*0.95;
	  
	    B[a][a][a]=B[a+3][a+1][a+5]+A[a][a];
	}

    return 0;
}