#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(740, 760, "zeros");

	for (int a = 5; a < 740; a++)
	{
	  
	    int var_a=A[a][a]-20;
	    int var_b=A[a-1][a-5]+48;
	}

    return 0;
}