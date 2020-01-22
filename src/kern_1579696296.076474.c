#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(20, 600, "zeros");
	int *B = create_one_dim_int(600, "zeros");
	int ***A = create_three_dim_int(510, 570, 340, "zeros");

	for (int c = 1; c < 600; c++)
	  for (int b = 4; b < 20; b++)
	    for (int a = 4; a < 20; a++)
	    {
	      
	      int var_a=C[a][b]-42;
	      int var_b=C[a-4][b-1]/25;
	    }

    return 0;
}