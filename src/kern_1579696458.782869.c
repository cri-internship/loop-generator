#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(880, 380, 710, "ones");
	float **B = create_two_dim_float(880, 220, "ones");
	float **A = create_two_dim_float(430, 940, "ones");
	float ***C = create_three_dim_float(460, 630, 640, "ones");
	float **E = create_two_dim_float(720, 940, "ones");

	for (int c = 0; c < 640; c++)
	  for (int b = 0; b < 380; b++)
	    for (int a = 0; a < 457; a++)
	    {
	      
	      C[a][b][c]=C[a+3][b+5][c]-D[a][b][c]+E[a][b];
	      
	      D[a][b][c]=D[a][b][c+5]/0.695;
	    }

    return 0;
}