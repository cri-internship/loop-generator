#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(980, 550, 970, "zeros");
	double **C = create_two_dim_double(120, 160, "zeros");
	double **B = create_two_dim_double(540, 730, "zeros");

	for (int a = 5; a < 120; a++)
	{
	  
	    C[a][a]=C[a][a-2]*0.716;
	  
	    C[a][a]=C[a-4][a-2]/A[a][a][a];
	  
	    C[a][a]=C[a-5][a-4]-0.561;
	  
	    B[a][a]=B[a][a+1]+0.734;
	}

    return 0;
}