#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(950, 200, 180, "random");
	float **C = create_two_dim_float(970, 390, "random");
	float ***B = create_three_dim_float(490, 260, 270, "random");

	for (int c = 2; c < 270; c++)
	  for (int b = 0; b < 260; b++)
	    for (int a = 4; a < 490; a++)
	    {
	      
	      float var_a=B[a][b][c]-0.624;
	      float var_b=B[a-4][b][c-2]*0.775;
	    }

    return 0;
}