#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(600, 290, 240, "random");
	int *A = create_one_dim_int(700, "random");

	for (int a = 0; a < 698; a++)
	{
	  
	    A[a]=13;
	    A[a+2]=14;
	}

    return 0;
}