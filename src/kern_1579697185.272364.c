#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(220, 360, 390, "zeros");
	int *B = create_one_dim_int(90, "zeros");

	for (int a = 0; a < 86; a++)
	{
	  
	    B[a]=B[a+4]*10;
	}

    return 0;
}