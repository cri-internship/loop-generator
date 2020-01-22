#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(530, 440, 530, "zeros");

	for (int a = 0; a < 525; a++)
	{
	  
	    A[a][a][a]=A[a+5][a+5][a+5]+0.361;
	}

    return 0;
}