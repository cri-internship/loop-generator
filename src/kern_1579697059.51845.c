#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(360, "ones");
	int ***D = create_three_dim_int(620, 130, 10, "ones");
	int ***B = create_three_dim_int(300, 990, 460, "ones");
	int ***C = create_three_dim_int(210, 200, 630, "ones");

	for (int a = 0; a < 617; a++)
	{
	  
	    D[a][a][a]=D[a][a+3][a]/29;
	}

    return 0;
}