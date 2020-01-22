#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(810, 510, 510, "ones");
	float ***A = create_three_dim_float(620, 680, 420, "ones");

	for (int c = 1; c < 510; c++)
	  for (int b = 2; b < 510; b++)
	    for (int a = 4; a < 810; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-2][c-1]+0.334;
	    }

    return 0;
}