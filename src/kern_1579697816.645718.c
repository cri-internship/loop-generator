#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(290, 900, "random");
	double **A = create_two_dim_double(990, 560, "random");
	double ***C = create_three_dim_double(710, 390, 210, "random");

	for (int a = 5; a < 290; a++)
	{
	  
	    B[a][a]=B[a][a-4]/0.663;
	  
	    C[a][a][a]=C[a-5][a-5][a]/0.885;
	  
	    C[a][a][a]=C[a-3][a-4][a]/B[a][a];
	}

    return 0;
}