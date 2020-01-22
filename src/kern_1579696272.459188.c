#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(670, 520, "zeros");
	int **A = create_two_dim_int(250, 130, "zeros");
	int ***C = create_three_dim_int(30, 560, 870, "zeros");

	for (int a = 5; a < 250; a++)
	{
	  
	    A[a][a]=A[a-2][a-1]+42;
	  
	    A[a][a]=B[a][a]/A[a][a];
	    C[a][a][a]=B[a-2][a-5]+15;
	}

    return 0;
}