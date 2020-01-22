#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(820, "ones");
	int *D = create_one_dim_int(60, "ones");
	int *E = create_one_dim_int(250, "ones");
	int **B = create_two_dim_int(450, 630, "ones");
	int ***A = create_three_dim_int(160, 620, 570, "ones");

	for (int a = 0; a < 816; a++)
	{
	  
	    C[a]=C[a+4]*19;
	}

    return 0;
}