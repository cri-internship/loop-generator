#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(420, 890, 210, "random");
	float *B = create_one_dim_float(990, "random");
	float ***A = create_three_dim_float(380, 470, 80, "random");
	float ***C = create_three_dim_float(170, 240, 310, "random");

	for (int a = 5; a < 375; a++)
	{
	  
	    D[a][a][a]=D[a-4][a][a-5]-A[a][a][a]/B[a];
	  
	    A[a][a][a]=A[a][a+5][a+2]+D[a][a][a]*C[a][a][a];
	  
	    A[a][a][a]=A[a+5][a+2][a+4]-0.079;
	}

    return 0;
}