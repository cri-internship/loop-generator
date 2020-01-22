#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(710, "random");
	int ***A = create_three_dim_int(220, 880, 890, "random");
	int ***B = create_three_dim_int(60, 940, 440, "random");
	int **C = create_two_dim_int(660, 350, "random");

	for (int a = 2; a < 220; a++)
	{
	  
	    A[a][a][a]=A[a][a-2][a-2]-22;
	}

    return 0;
}