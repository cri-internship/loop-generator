#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(800, 910, 750, "random");
	double **C = create_two_dim_double(670, 220, "random");
	double **A = create_two_dim_double(280, 320, "random");

	for (int a = 5; a < 280; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-5][a-2]/C[a][a];
	  
	    A[a][a]=A[a][a-4]*0.368;
	  
	    C[a][a]=C[a-2][a]-0.043;
	}

    return 0;
}