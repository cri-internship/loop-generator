#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(240, 720, "random");
	int **A = create_two_dim_int(590, 670, "random");

	for (int a = 3; a < 240; a++)
	{
	  
	    B[a][a]=B[a][a-3]+22;
	  
	    A[a][a]=11;
	    float  var_a=A[a][a]/43;
	}

    return 0;
}