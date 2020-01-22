#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(70, "ones");
	int ***A = create_three_dim_int(900, 520, 30, "ones");
	int ***B = create_three_dim_int(660, 880, 500, "ones");

	for (int a = 0; a < 68; a++)
	{
	  
	    int var_a=C[a]-45;
	    int var_b=C[a+2]+30;
	}

    return 0;
}