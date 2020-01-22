#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(840, 710, 140, "random");
	float ***B = create_three_dim_float(760, 440, 1000, "random");

	for (int a = 4; a < 755; a++)
	{
	  
	    B[a][a][a]=B[a][a][a-1]-A[a][a][a];
	  
	    B[a][a][a]=B[a+2][a+1][a+5]/A[a][a][a];
	  
	    A[a][a][a]=A[a+3][a+1][a+3]+B[a][a][a];
	  
	    A[a][a][a]=B[a][a][a]+0.574;
	    B[a][a][a]=B[a+3][a+2][a]-A[a][a][a];
	  
	    A[a][a][a]=A[a][a][a]*B[a][a][a];
	    B[a][a][a]=A[a-1][a-1][a-4]+0.043;
	}

    return 0;
}