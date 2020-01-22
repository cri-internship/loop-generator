#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(790, 970, "ones");
	int **B = create_two_dim_int(640, 170, "ones");
	int ***E = create_three_dim_int(110, 960, 530, "ones");
	int *C = create_one_dim_int(500, "ones");
	int *D = create_one_dim_int(510, "ones");

	for (int a = 5; a < 500; a++)
	{
	  
	    C[a]=C[a-5]/26;
	}

    return 0;
}