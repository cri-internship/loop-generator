#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(630, 770, 100, "random");
	int *A = create_one_dim_int(50, "random");
	int *B = create_one_dim_int(160, "random");
	int ***D = create_three_dim_int(560, 700, 880, "random");

	for (int a = 5; a < 48; a++)
	{
	  
	    B[a]=B[a-5]*10;
	  
	    A[a]=A[a+2]-11;
	}

    return 0;
}