#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(500, 360, "zeros");
	int **C = create_two_dim_int(170, 670, "zeros");
	int *B = create_one_dim_int(570, "zeros");

	for (int a = 4; a < 170; a++)
	{
	  
	    C[a][a]=C[a-1][a-2]+41;
	  
	    B[a]=B[a+3]/34;
	  
	    B[a]=B[a+5]-C[a][a];
	  
	    int var_a=B[a]-43;
	    int var_b=B[a]+29;
	}

    return 0;
}