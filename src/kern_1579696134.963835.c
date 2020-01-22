#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(720, 850, 650, "zeros");
	double **B = create_two_dim_double(20, 730, "zeros");
	double *A = create_one_dim_double(170, "zeros");

	for (int a = 5; a < 720; a++)
	{
	  
	    C[a][a][a]=C[a-2][a-3][a-5]+0.815;
	}

    return 0;
}