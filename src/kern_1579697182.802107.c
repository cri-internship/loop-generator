#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(690, 1000, 520, "zeros");
	double **B = create_two_dim_double(670, 990, "zeros");

	for (int a = 5; a < 669; a++)
	{
	  
	    B[a][a]=B[a-1][a-5]/A[a][a][a];
	  
	    B[a][a]=B[a-2][a-2]-A[a][a][a];
	  
	    B[a][a]=B[a+1][a]+0.484;
	}

    return 0;
}