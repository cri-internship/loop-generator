#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(110, 60, 750, "random");
	float ***A = create_three_dim_float(100, 20, 630, "random");
	float **B = create_two_dim_float(470, 20, "random");

	for (int a = 5; a < 95; a++)
	{
	  
	    B[a][a]=B[a][a+5]/A[a][a][a]*C[a][a][a];
	  
	    A[a][a][a]=A[a+5][a+5][a+5]+B[a][a];
	  
	    A[a][a][a]=0.747;
	  
	    B[a][a]=0.618;
	  
	    A[a][a][a]=B[a][a]-A[a][a][a];
	    B[a][a]=B[a-2][a]+C[a][a][a]/0.062;
	  
	    C[a][a][a]=C[a][a][a]+B[a][a]-0.501;
	    A[a][a][a]=C[a+2][a+1][a+4]-B[a][a];
	}

    return 0;
}