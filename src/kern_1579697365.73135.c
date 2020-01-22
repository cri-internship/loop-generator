#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(640, "zeros");
	double *C = create_one_dim_double(460, "zeros");
	double ***D = create_three_dim_double(600, 220, 500, "zeros");
	double ***A = create_three_dim_double(250, 870, 840, "zeros");

	for (int a = 5; a < 250; a++)
	{
	  
	    C[a]=A[a][a][a]-B[a]*C[a]+D[a][a][a];
	    B[a]=A[a-4][a-4][a-5]+B[a]/C[a];
	}

    return 0;
}