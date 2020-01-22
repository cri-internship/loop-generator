#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(920, 230, "ones");
	int *C = create_one_dim_int(120, "ones");
	int **D = create_two_dim_int(150, 970, "ones");
	int *A = create_one_dim_int(90, "ones");

	for (int a = 0; a < 145; a++)
	{
	  
	    B[a][a]=B[a+1][a+2]-13;
	  
	    D[a][a]=D[a+1][a+5]-21;
	}

    return 0;
}