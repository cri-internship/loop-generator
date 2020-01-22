#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(100, 430, "zeros");
	int **B = create_two_dim_int(650, 490, "zeros");
	int **A = create_two_dim_int(810, 30, "zeros");
	int ***C = create_three_dim_int(480, 90, 550, "zeros");

	for (int c = 2; c < 550; c++)
	  for (int b = 1; b < 90; b++)
	    for (int a = 5; a < 480; a++)
	    {
	      
	      int var_a=C[a][b][c]-7;
	      int var_b=C[a-5][b-1][c-2]*47;
	    }

    return 0;
}