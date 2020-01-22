#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(750, 590, 530, "random");
	double **A = create_two_dim_double(780, 850, "random");
	double ***C = create_three_dim_double(790, 920, 900, "random");

	for (int a = 5; a < 746; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-3][a-4]-0.117;
	  
	    B[a][a][a]=B[a+2][a+4][a]/0.96;
	  
	    A[a][a]=A[a+5][a+4]+0.083;
	  
	    C[a][a][a]=C[a+5][a+2][a+2]-0.106;
	  
	    A[a][a]=C[a][a][a];
	}

    return 0;
}