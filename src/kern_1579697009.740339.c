#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(880, 520, "random");
	float **A = create_two_dim_float(490, 470, "random");
	float **C = create_two_dim_float(520, 860, "random");

	for (int a = 4; a < 485; a++)
	{
	  
	    B[a][a]=B[a-4][a-2]+0.789/A[a][a];
	  
	    B[a][a]=B[a-2][a]/0.521;
	  
	    A[a][a]=A[a-4][a]/B[a][a]*C[a][a];
	  
	    B[a][a]=B[a+2][a+1]+0.523;
	  
	    C[a][a]=C[a+1][a+4]*0.292;
	  
	    B[a][a]=B[a+4][a+4]*1.0;
	  
	    A[a][a]=A[a+1][a+5]*B[a][a]-C[a][a];
	}

    return 0;
}