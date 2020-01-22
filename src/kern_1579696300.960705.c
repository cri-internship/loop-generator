#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(140, 920, "zeros");
	double **B = create_two_dim_double(800, 780, "zeros");
	double **C = create_two_dim_double(540, 260, "zeros");

	for (int a = 5; a < 135; a++)
	{
	  
	    B[a][a]=B[a-1][a-2]*0.304;
	  
	    C[a][a]=C[a-5][a-4]+0.623;
	  
	    B[a][a]=B[a+1][a+4]*C[a][a];
	  
	    A[a][a]=A[a+5][a]/B[a][a]*C[a][a];
	}

    return 0;
}