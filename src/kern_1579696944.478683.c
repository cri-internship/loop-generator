#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(430, 960, 880, "random");

	for (int a = 0; a < 427; a++)
	{
	  
	    int var_a=A[a][a][a]-30;
	    int var_b=A[a+3][a+1][a+2]/15;
	}

    return 0;
}