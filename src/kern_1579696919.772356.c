#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(340, 340, "zeros");
	int ***A = create_three_dim_int(620, 180, 800, "zeros");

	for (int a = 5; a < 340; a++)
	{
	  
	    A[a][a][a]=A[a][a-5][a-5]+B[a][a];
	  
	    B[a][a]=B[a-4][a-2]/A[a][a][a];
	}

    return 0;
}