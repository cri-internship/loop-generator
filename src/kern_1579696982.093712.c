#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(210, "zeros");
	int **C = create_two_dim_int(930, 1000, "zeros");
	int **A = create_two_dim_int(270, 790, "zeros");

	for (int c = 3; c < 1000; c++)
	  for (int b = 3; b < 930; b++)
	    for (int a = 3; a < 930; a++)
	    {
	      
	      int var_a=C[a][b]+45;
	      int var_b=C[a-3][b-3]-44;
	    }

    return 0;
}