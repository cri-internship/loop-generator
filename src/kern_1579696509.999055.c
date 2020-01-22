#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(870, 590, 280, "zeros");
	double **A = create_two_dim_double(880, 570, "zeros");

	for (int a = 5; a < 865; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-3][a]+0.175;
	  
	    A[a][a]=A[a-3][a-5]/B[a][a][a];
	  
	    B[a][a][a]=B[a+1][a+5][a+3]+0.851;
	}

    return 0;
}