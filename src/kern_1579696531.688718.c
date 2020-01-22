#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(990, 10, 90, "random");
	int ***D = create_three_dim_int(230, 120, 150, "random");
	int ***A = create_three_dim_int(860, 810, 950, "random");
	int ***C = create_three_dim_int(630, 410, 680, "random");

	for (int c = 0; c < 679; c++)
	  for (int b = 0; b < 405; b++)
	    for (int a = 0; a < 625; a++)
	    {
	      
	      int var_a=C[a][b][c]*14;
	      int var_b=C[a+5][b+5][c+1]+34;
	    }

    return 0;
}