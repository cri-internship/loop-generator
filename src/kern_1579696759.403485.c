#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(230, 350, "random");
	float **A = create_two_dim_float(160, 720, "random");
	float **B = create_two_dim_float(220, 610, "random");

	for (int a = 5; a < 217; a++)
	{
	  
	    C[a][a]=C[a-4][a-4]/B[a][a]+0.702;
	  
	    C[a][a]=C[a+5][a+1]-0.108;
	  
	    B[a][a]=B[a+2][a]-0.284;
	  
	    B[a][a]=C[a][a]/C[a][a];
	}

    return 0;
}