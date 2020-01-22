#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(480, 770, 180, "ones");
	int **A = create_two_dim_int(750, 490, "ones");

	for (int a = 0; a < 746; a++)
	{
	  
	    A[a][a]=A[a+4][a+2]-47;
	}

    return 0;
}