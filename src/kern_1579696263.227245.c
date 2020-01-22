#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(830, "ones");
	double *A = create_one_dim_double(50, "ones");
	double **D = create_two_dim_double(40, 330, "ones");
	double ***C = create_three_dim_double(560, 830, 820, "ones");
	double **B = create_two_dim_double(300, 240, "ones");

	for (int a = 4; a < 560; a++)
	{
	  
	    C[a][a][a]=0.018;
	    C[a-1][a-3][a-4]=0.698;
	}

    return 0;
}