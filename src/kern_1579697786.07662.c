#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(400, 70, 790, "random");
	float ***B = create_three_dim_float(500, 150, 460, "random");
	float **C = create_two_dim_float(890, 840, "random");
	float ***A = create_three_dim_float(630, 730, 370, "random");

	for (int a = 5; a < 500; a++)
	{
	  
	    C[a][a]=D[a][a][a];
	    C[a-5][a-1]=A[a][a][a]/B[a][a][a];
	  
	    C[a][a]=B[a][a][a]/0.914;
	    A[a][a][a]=B[a-2][a-2][a-1]-A[a][a][a];
	  
	    D[a][a][a]=C[a][a]/A[a][a][a]*D[a][a][a];
	    B[a][a][a]=C[a-1][a-1]-0.576/D[a][a][a];
	}

    return 0;
}