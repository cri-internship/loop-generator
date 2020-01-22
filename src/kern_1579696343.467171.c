#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(330, 770, 280, "zeros");
	float **A = create_two_dim_float(940, 630, "zeros");

	for (int a = 4; a < 326; a++)
	{
	  
	    B[a][a][a]=B[a-1][a-4][a-2]+0.615;
	  
	    B[a][a][a]=B[a+2][a+1][a+4]*0.513;
	  
	    A[a][a]=A[a][a]+B[a][a][a];
	    B[a][a][a]=A[a][a]+B[a][a][a];
	}

    return 0;
}