#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(470, 550, "zeros");
	int *A = create_one_dim_int(70, "zeros");
	int *C = create_one_dim_int(800, "zeros");
	int *E = create_one_dim_int(100, "zeros");
	int **B = create_two_dim_int(240, 560, "zeros");

	for (int a = 5; a < 240; a++)
	{
	  
	    B[a][a]=B[a-5][a-3]/4;
	  
	    C[a]=C[a+4]/10*A[a];
	  
	    int var_a=C[a]/39;
	    int var_b=C[a+2]/44;
	}

    return 0;
}