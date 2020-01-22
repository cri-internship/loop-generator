#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(440, 80, "zeros");
	double ***C = create_three_dim_double(130, 320, 540, "zeros");
	double *A = create_one_dim_double(510, "zeros");

	for (int a = 0; a < 128; a++)
	{
	  
	    C[a][a][a]=C[a+2][a+2][a+1]+A[a]/B[a][a];
	}

    return 0;
}