#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(830, 890, "zeros");
	int **C = create_two_dim_int(650, 760, "zeros");
	int *A = create_one_dim_int(200, "zeros");

	for (int c = 0; c < 886; c++)
	  for (int b = 0; b < 827; b++)
	    for (int a = 0; a < 827; a++)
	    {
	      
	      B[a][b]=35;
	      B[a+3][b+4]=4;
	    }

    return 0;
}