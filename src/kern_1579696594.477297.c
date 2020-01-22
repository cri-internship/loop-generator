#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(540, 730, 710, "random");
	float ***A = create_three_dim_float(400, 580, 710, "random");

	for (int a = 4; a < 396; a++)
	{
	  
	    A[a][a][a]=A[a-2][a][a-4]-0.726;
	  
	    A[a][a][a]=A[a][a+4][a+3]-0.045;
	  
	    A[a][a][a]=A[a+4][a][a+1]*0.156;
	  
	    B[a][a][a]=B[a+5][a+5][a+1]-0.99;
	  
	    B[a][a][a]=B[a+5][a+2][a]+A[a][a][a];
	  
	    A[a][a][a]=B[a][a][a]/A[a][a][a];
	    B[a][a][a]=B[a-3][a][a-2]+A[a][a][a];
	}

    return 0;
}