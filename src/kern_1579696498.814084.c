#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(670, 90, "ones");
	int *C = create_one_dim_int(610, "ones");
	int **B = create_two_dim_int(590, 310, "ones");

	for (int a = 5; a < 587; a++)
	{
	  
	    B[a][a]=B[a][a-5]/43;
	  
	    int var_a=B[a][a]+2;
	    int var_b=B[a+3][a+3]+19;
	}

    return 0;
}