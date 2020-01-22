#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(620, 170, "random");
	float ***C = create_three_dim_float(400, 530, 880, "random");
	float ***A = create_three_dim_float(560, 340, 440, "random");

	for (int a = 0; a < 555; a++)
	{
	  
	    A[a][a][a]=B[a][a]-C[a][a][a];
	    B[a][a]=A[a][a][a]-0.78;
	  
	    A[a][a][a]=B[a][a];
	}

    return 0;
}