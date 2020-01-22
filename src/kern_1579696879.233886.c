#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(620, 510, 120, "zeros");
	int **B = create_two_dim_int(60, 900, "zeros");
	int ***A = create_three_dim_int(330, 320, 780, "zeros");

	for (int c = 0; c < 897; c++)
	  for (int b = 0; b < 60; b++)
	    for (int a = 0; a < 60; a++)
	    {
	      
	      int var_a=B[a][b]-15;
	      int var_b=B[a][b+3]*25;
	    }

    return 0;
}