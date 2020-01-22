#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(40, 160, 760, "zeros");
	int *C = create_one_dim_int(450, "zeros");
	int ***A = create_three_dim_int(430, 570, 580, "zeros");

	for (int a = 0; a < 426; a++)
	{
	  
	    A[a][a][a]=A[a+4][a+4][a]/13;
	}

    return 0;
}