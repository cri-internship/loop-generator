#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(440, "random");
	int ***A = create_three_dim_int(40, 690, 90, "random");

	for (int a = 1; a < 35; a++)
	{
	  
	    A[a][a][a]=A[a+1][a][a+2]*31;
	  
	    A[a][a][a]=A[a+1][a+1][a+5]/B[a];
	  
	    int var_a=B[a]+23;
	    int var_b=B[a+2]/9;
	}

    return 0;
}