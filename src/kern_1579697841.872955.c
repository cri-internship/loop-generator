#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(10, 50, 10, "zeros");
	float ***B = create_three_dim_float(60, 760, 100, "zeros");

	for (int a = 5; a < 6; a++)
	{
	  
	    A[a][a][a]=A[a+2][a+1][a+4]+B[a][a][a];
	  
	    B[a][a][a]=0.088;
	    B[a-5][a-2][a]=0.118;
	}

    return 0;
}