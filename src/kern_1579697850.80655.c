#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(750, 760, "random");
	double ***C = create_three_dim_double(50, 30, 840, "random");
	double ***A = create_three_dim_double(520, 730, 140, "random");

	for (int c = 2; c < 840; c++)
	  for (int b = 4; b < 30; b++)
	    for (int a = 4; a < 50; a++)
	    {
	      
	      C[a][b][c]=C[a-4][b-4][c-2]/0.163;
	    }

    return 0;
}