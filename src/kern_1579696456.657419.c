#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(20, 760, 500, "ones");
	double **B = create_two_dim_double(210, 310, "ones");
	double ***C = create_three_dim_double(1000, 550, 150, "ones");

	for (int a = 5; a < 20; a++)
	{
	  
	    A[a][a][a]=A[a-1][a-5][a-4]/0.352;
	  
	    C[a][a][a]=C[a][a-5][a-2]/0.981;
	  
	    B[a][a]=B[a-5][a-3]*0.021-A[a][a][a];
	  
	    C[a][a][a]=C[a+4][a][a+4]+0.247;
	  
	    C[a][a][a]=C[a+4][a+2][a]+B[a][a];
	}

    return 0;
}