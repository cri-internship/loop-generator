#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(440, "ones");
	int *A = create_one_dim_int(310, "ones");
	int **D = create_two_dim_int(300, 440, "ones");
	int *B = create_one_dim_int(80, "ones");

	for (int a = 4; a < 80; a++)
	{
	  
	    A[a]=A[a-4]*33;
	  
	    B[a]=D[a][a]/C[a];
	    A[a]=B[a]+18-C[a]/A[a];
	  
	    D[a][a]=D[a+2][a]*14;
	  
	    D[a][a]=14;
	  
	    int var_a=C[a]/30;
	    int var_b=C[a+5]*11;
	}

    return 0;
}