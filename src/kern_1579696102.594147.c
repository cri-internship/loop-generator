#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(270, 490, 920, "zeros");
	double **A = create_two_dim_double(320, 680, "zeros");

	for (int c = 0; c < 917; c++)
	  for (int b = 0; b < 488; b++)
	    for (int a = 0; a < 268; a++)
	    {
	      
	      B[a][b][c]=0.111;
	      B[a+2][b+2][c+3]=0.483;
	    }

    return 0;
}