#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(820, "random");
	float **A = create_two_dim_float(600, 50, "random");
	float **B = create_two_dim_float(450, 480, "random");
	float **D = create_two_dim_float(990, 760, "random");

	for (int a = 5; a < 445; a++)
	{
	  
	    A[a][a]=A[a-2][a-5]+0.931;
	  
	    B[a][a]=B[a+2][a+5]+0.828;
	  
	    A[a][a]=A[a+1][a+3]*C[a];
	  
	    B[a][a]=0.383;
	  
	    D[a][a]=D[a][a]+A[a][a]*B[a][a]/B[a][a];
	    C[a]=D[a-2][a-5]/B[a][a];
	}

    return 0;
}