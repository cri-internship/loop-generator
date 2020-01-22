#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(980, 970, "zeros");
	int ***A = create_three_dim_int(230, 10, 800, "zeros");
	int **B = create_two_dim_int(140, 160, "zeros");

	for (int c = 3; c < 970; c++)
	  for (int b = 1; b < 980; b++)
	    for (int a = 1; a < 980; a++)
	    {
	      
	      C[a][b]=23;
	      C[a-1][b-3]=14;
	    }

    return 0;
}