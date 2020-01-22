#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(10, 370, 940, "random");

	for (int a = 0; a < 6; a++)
	{
	  
	    A[a][a][a]=47;
	    A[a+1][a+3][a+4]=28;
	}

    return 0;
}