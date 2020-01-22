#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(470, 120, 700, "random");

	for (int a = 4; a < 465; a++)
	{
	  
	    A[a][a][a]=A[a-3][a-2][a-4]*0.154;
	  
	    A[a][a][a]=A[a][a][a-1]-0.554;
	}

    return 0;
}