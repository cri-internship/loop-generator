#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(70, 50, "zeros");
	int **C = create_two_dim_int(40, 80, "zeros");
	int **B = create_two_dim_int(890, 340, "zeros");

	for (int a = 3; a < 36; a++)
	{
	  
	    B[a][a]=B[a-1][a-3]/41;
	  
	    C[a][a]=C[a+4][a]*45;
	}

    return 0;
}