#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(830, 730, 650, "zeros");
	int *C = create_one_dim_int(310, "zeros");
	int ***B = create_three_dim_int(250, 20, 580, "zeros");

	for (int a = 5; a < 306; a++)
	{
	  
	    A[a][a][a]=A[a-5][a-3][a]*44;
	  
	    C[a]=C[a+4]/A[a][a][a]-B[a][a][a];
	  
	    C[a]=A[a][a][a];
	  
	    A[a][a][a]=17-C[a];
	}

    return 0;
}