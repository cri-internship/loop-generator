#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(750, "zeros");
	int *B = create_one_dim_int(770, "zeros");
	int ***A = create_three_dim_int(290, 350, 380, "zeros");

	for (int a = 5; a < 288; a++)
	{
	  
	    A[a][a][a]=A[a+2][a+2][a+2]*49;
	  
	    A[a][a][a]=40;
	  
	    A[a][a][a]=A[a][a][a]+C[a]/B[a];
	    B[a]=A[a-5][a-2][a-4]+B[a]/C[a];
	}

    return 0;
}