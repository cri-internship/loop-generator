#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(700, 980, 750, "zeros");
	int *A = create_one_dim_int(820, "zeros");
	int *C = create_one_dim_int(70, "zeros");

	for (int a = 0; a < 696; a++)
	{
	  
	    B[a][a][a]=B[a+4][a][a+3]+11;
	}

    return 0;
}