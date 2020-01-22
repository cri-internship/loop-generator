#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(460, 870, "zeros");
	int *A = create_one_dim_int(450, "zeros");

	for (int a = 4; a < 455; a++)
	{
	  
	    B[a][a]=B[a-4][a-4]+25;
	  
	    int var_a=B[a][a]-15;
	    int var_b=B[a+1][a+5]-11;
	}

    return 0;
}