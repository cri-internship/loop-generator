#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(50, 700, "ones");
	double ***A = create_three_dim_double(850, 660, 640, "ones");

	for (int a = 3; a < 45; a++)
	{
	  
	    B[a][a]=B[a-2][a-3]/A[a][a][a];
	  
	    A[a][a][a]=A[a-3][a][a]+B[a][a];
	  
	    B[a][a]=B[a+3][a+5]*0.54;
	  
	    A[a][a][a]=0.639;
	}

    return 0;
}