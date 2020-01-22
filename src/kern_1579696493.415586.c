#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(210, 130, "zeros");
	double **A = create_two_dim_double(460, 830, "zeros");
	double ***B = create_three_dim_double(990, 90, 190, "zeros");

	for (int a = 4; a < 205; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-2][a-4]*0.456;
	  
	    B[a][a][a]=B[a+4][a+5][a+5]/0.554;
	  
	    C[a][a]=0.789/B[a][a][a];
	    C[a+5][a+3]=A[a][a];
	  
	    C[a][a]=0.374;
	}

    return 0;
}