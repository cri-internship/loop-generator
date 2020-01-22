#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(480, 640, 610, "ones");
	float ***C = create_three_dim_float(1000, 760, 990, "ones");
	float ***D = create_three_dim_float(440, 820, 20, "ones");
	float ***B = create_three_dim_float(150, 160, 300, "ones");

	for (int c = 4; c < 20; c++)
	  for (int b = 2; b < 820; b++)
	    for (int a = 4; a < 440; a++)
	    {
	      
	      D[a][b][c]=D[a-4][b-2][c-4]+0.29;
	    }

    return 0;
}