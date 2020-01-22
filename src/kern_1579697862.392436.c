#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(210, "random");
	int ***A = create_three_dim_int(60, 740, 40, "random");

	for (int a = 0; a < 210; a++)
	{
	  
	    B[a]=46;
	    B[a]=30;
	}

    return 0;
}