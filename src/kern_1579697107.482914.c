#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(50, 130, 460, "ones");
	float **C = create_two_dim_float(330, 550, "ones");
	float ***A = create_three_dim_float(150, 250, 30, "ones");

	for (int a = 3; a < 50; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-1][a]*C[a][a]/A[a][a][a];
	  
	    A[a][a][a]=A[a][a-1][a-3]*0.546;
	  
	    A[a][a][a]=B[a][a][a];
	}

    return 0;
}