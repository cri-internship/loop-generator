#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(880, "random");
	int ***B = create_three_dim_int(520, 940, 200, "random");
	int **D = create_two_dim_int(390, 660, "random");
	int **C = create_two_dim_int(900, 890, "random");

	for (int a = 1; a < 880; a++)
	{
	  
	    int var_a=A[a]+27;
	    int var_b=A[a-1]*48;
	}

    return 0;
}