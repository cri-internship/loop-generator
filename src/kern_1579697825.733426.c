#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(340, 460, "random");
	int *B = create_one_dim_int(670, "random");
	int **A = create_two_dim_int(740, 720, "random");

	for (int a = 3; a < 670; a++)
	{
	  
	    B[a]=B[a-3]-47;
	}

    return 0;
}