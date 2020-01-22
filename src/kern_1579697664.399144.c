#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(510, 990, 20, "zeros");
	double **B = create_two_dim_double(640, 860, "zeros");
	double ***E = create_three_dim_double(960, 570, 830, "zeros");
	double ***D = create_three_dim_double(190, 380, 860, "zeros");
	double ***C = create_three_dim_double(760, 130, 200, "zeros");

	for (int c = 0; c < 20; c++)
	  for (int b = 0; b < 988; b++)
	    for (int a = 0; a < 505; a++)
	    {
	      
	      A[a][b][c]=A[a+5][b+2][c]-0.795;
	    }

    return 0;
}