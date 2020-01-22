#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(690, 250, 130, "random");
	float ***C = create_three_dim_float(20, 80, 260, "random");
	float **A = create_two_dim_float(480, 730, "random");
	float **B = create_two_dim_float(900, 270, "random");

	for (int a = 4; a < 690; a++)
	{
	  
	    D[a][a][a]=C[a][a][a]-A[a][a];
	    D[a-1][a-3][a-1]=B[a][a]*B[a][a];
	  
	    D[a][a][a]=A[a][a]/C[a][a][a]*B[a][a];
	}

    return 0;
}