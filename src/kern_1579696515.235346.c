#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(340, 190, "random");
	float **B = create_two_dim_float(330, 510, "random");

	for (int a = 4; a < 325; a++)
	{
	  
	    A[a][a]=A[a-2][a-4]-0.421;
	  
	    B[a][a]=B[a+5][a+3]/0.85;
	  
	    A[a][a]=B[a][a];
	  
	    B[a][a]=0.78;
	  
	    B[a][a]=A[a][a]/B[a][a];
	    A[a][a]=A[a+2][a+1]*0.271;
	}

    return 0;
}