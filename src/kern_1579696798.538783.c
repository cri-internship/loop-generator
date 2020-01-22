#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(540, 240, "ones");
	int **B = create_two_dim_int(860, 790, "ones");
	int *C = create_one_dim_int(260, "ones");

	for (int a = 3; a < 260; a++)
	{
	  
	    B[a][a]=B[a-3][a]/C[a]+A[a][a];
	  
	    B[a][a]=B[a][a+5]+3;
	  
	    B[a][a]=B[a+2][a+5]-1;
	  
	    C[a]=44;
	    C[a]=14;
	}

    return 0;
}