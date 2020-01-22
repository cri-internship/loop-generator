#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(460, 680, 930, "ones");
	float *B = create_one_dim_float(560, "ones");
	float ***D = create_three_dim_float(170, 470, 500, "ones");
	float ***A = create_three_dim_float(450, 10, 510, "ones");

	for (int a = 4; a < 450; a++)
	{
	  
	    A[a][a][a]=B[a]*C[a][a][a]/D[a][a][a];
	    A[a-3][a-3][a-4]=C[a][a][a]+D[a][a][a]-B[a];
	}

    return 0;
}