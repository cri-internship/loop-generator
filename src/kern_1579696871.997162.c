#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(60, 40, "ones");
	int **A = create_two_dim_int(40, 860, "ones");
	int **B = create_two_dim_int(220, 480, "ones");

	for (int a = 4; a < 56; a++)
	{
	  
	    int var_a=C[a][a]*9;
	    int var_b=C[a+4][a+3]*13;
	  
	    int var_c=C[a][a]/10;
	    int var_d=C[a-2][a-4]*26;
	}

    return 0;
}