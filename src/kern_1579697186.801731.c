#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(880, 20, 80, "zeros");
	float **B = create_two_dim_float(180, 900, "zeros");

	for (int a = 5; a < 175; a++)
	{
	  
	    B[a][a]=B[a][a-5]/0.787;
	  
	    B[a][a]=B[a+5][a+1]+0.775;
	}

    return 0;
}