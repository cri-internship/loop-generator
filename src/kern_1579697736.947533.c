#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(180, "random");
	int *A = create_one_dim_int(460, "random");
	int ***B = create_three_dim_int(670, 810, 730, "random");

	for (int a = 3; a < 665; a++)
	{
	  
	    B[a][a][a]=B[a][a+4][a]-39;
	  
	    B[a][a][a]=3;
	  
	    int var_a=B[a][a][a]*0;
	    int var_b=B[a+3][a+5][a]/36;
	}

    return 0;
}