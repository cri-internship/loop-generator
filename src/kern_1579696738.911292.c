#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(930, 460, 140, "ones");
	double ***A = create_three_dim_double(920, 260, 550, "ones");
	double **B = create_two_dim_double(490, 550, "ones");

	for (int c = 0; c < 545; c++)
	  for (int b = 0; b < 257; b++)
	    for (int a = 0; a < 918; a++)
	    {
	      
	      A[a][b][c]=A[a+2][b+3][c+5]-0.478;
	    }

    return 0;
}