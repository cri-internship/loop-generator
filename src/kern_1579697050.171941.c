#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(830, 300, "zeros");
	double **B = create_two_dim_double(110, 210, "zeros");
	double ***C = create_three_dim_double(750, 680, 400, "zeros");

	for (int a = 3; a < 746; a++)
	{
	  
	    A[a][a]=A[a-3][a-3]/B[a][a]+0.611;
	  
	    C[a][a][a]=C[a+4][a+4][a+4]+A[a][a]*B[a][a];
	}

    return 0;
}