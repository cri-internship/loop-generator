#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(850, 380, 790, "random");

	for (int a = 3; a < 850; a++)
	{
	  
	    int var_a=A[a][a][a]/3;
	    int var_b=A[a-3][a-1][a-1]+26;
	}

    return 0;
}