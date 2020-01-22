#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(260, 870, 980, "zeros");
	int *B = create_one_dim_int(750, "zeros");

	for (int a = 5; a < 260; a++)
	{
	  
	    A[a][a][a]=31;
	    A[a-1][a-5][a-4]=7;
	  
	    int var_a=A[a][a][a]/27;
	    int var_b=A[a-1][a-2][a-4]-24;
	}

    return 0;
}