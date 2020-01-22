#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(280, 810, 990, "zeros");
	float **E = create_two_dim_float(180, 840, "zeros");
	float **A = create_two_dim_float(330, 20, "zeros");
	float ***C = create_three_dim_float(990, 870, 240, "zeros");
	float **B = create_two_dim_float(730, 200, "zeros");

	for (int c = 2; c < 840; c++)
	  for (int b = 0; b < 180; b++)
	    for (int a = 0; a < 180; a++)
	    {
	      
	      E[a][b]=0.084;
	      E[a][b-2]=0.316;
	    }

    return 0;
}