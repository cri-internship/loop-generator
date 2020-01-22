#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(60, 50, 330, "ones");
	float **C = create_two_dim_float(370, 650, "ones");
	float ***E = create_three_dim_float(360, 260, 220, "ones");
	float **A = create_two_dim_float(600, 290, "ones");
	float ***D = create_three_dim_float(110, 120, 270, "ones");

	for (int c = 0; c < 218; c++)
	  for (int b = 0; b < 255; b++)
	    for (int a = 0; a < 360; a++)
	    {
	      
	      E[a][b][c]=E[a][b+5][c+2]-0.265;
	    }

    return 0;
}