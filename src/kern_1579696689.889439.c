#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(620, 110, 430, "ones");

	for (int a = 0; a < 615; a++)
	{
	  
	    A[a][a][a]=A[a+5][a+2][a+1]+0.174;
	  
	    A[a][a][a]=0.588;
	}

    return 0;
}