#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(200, 380, "ones");
	int *D = create_one_dim_int(160, "ones");
	int **E = create_two_dim_int(920, 130, "ones");
	int **A = create_two_dim_int(590, 660, "ones");
	int *C = create_one_dim_int(190, "ones");

	for (int a = 0; a < 190; a++)
	{
	  
	    int var_a=C[a]-37;
	    int var_b=C[a]-21;
	}

    return 0;
}