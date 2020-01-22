#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(360, 980, "random");
	int ***E = create_three_dim_int(490, 800, 360, "random");
	int *B = create_one_dim_int(910, "random");
	int ***A = create_three_dim_int(660, 710, 60, "random");
	int *C = create_one_dim_int(990, "random");

	for (int a = 0; a < 909; a++)
	{
	  
	    int var_a=B[a]*44;
	    int var_b=B[a+1]/19;
	}

    return 0;
}