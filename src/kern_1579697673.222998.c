#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(640, 690, 280, "random");
	double **C = create_two_dim_double(970, 80, "random");
	double ***A = create_three_dim_double(200, 30, 450, "random");

	for (int a = 5; a < 200; a++)
	{
	  
	    A[a][a][a]=A[a-5][a][a-4]*0.908;
	  
	    B[a][a][a]=C[a][a];
	    B[a-5][a-3][a]=A[a][a][a];
	  
	    A[a][a][a]=A[a][a][a]/B[a][a][a]+0.796;
	    B[a][a][a]=A[a-5][a-1][a-2]*C[a][a];
	}

    return 0;
}