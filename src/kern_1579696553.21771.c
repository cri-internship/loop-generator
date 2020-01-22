#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(540, 260, "random");
	float ***B = create_three_dim_float(10, 800, 820, "random");

	for (int a = 5; a < 6; a++)
	{
	  
	    A[a][a]=A[a+1][a]/B[a][a][a];
	  
	    B[a][a][a]=A[a][a];
	    B[a+2][a+4][a+2]=A[a][a];
	  
	    A[a][a]=B[a][a][a]*A[a][a];
	    B[a][a][a]=B[a][a-5][a-2]-A[a][a];
	}

    return 0;
}