#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(560, "zeros");
	int ***A = create_three_dim_int(620, 430, 430, "zeros");
	int **C = create_two_dim_int(890, 530, "zeros");
	int **B = create_two_dim_int(710, 640, "zeros");

	for (int a = 0; a < 889; a++)
	{
	  
	    C[a][a]=17;
	    C[a+1][a]=24;
	}

    return 0;
}