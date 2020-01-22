#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(610, 420, 530, "ones");

	for (int a = 0; a < 607; a++)
	{
	  
	    A[a][a][a]=A[a+3][a][a+3]+0.939;
	  
	    A[a][a][a]=A[a][a+3][a]-0.172;
	}

    return 0;
}