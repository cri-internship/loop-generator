#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(540, 120, 970, "ones");
	double *D = create_one_dim_double(650, "ones");
	double ***E = create_three_dim_double(20, 540, 140, "ones");
	double ***B = create_three_dim_double(860, 320, 920, "ones");
	double **C = create_two_dim_double(370, 640, "ones");

	for (int c = 0; c < 969; c++)
	  for (int b = 0; b < 115; b++)
	    for (int a = 3; a < 536; a++)
	    {
	      
	      D[a]=D[a-3]/0.592;
	      
	      A[a][b][c]=A[a+4][b+5][c+1]+0.978;
	    }

    return 0;
}