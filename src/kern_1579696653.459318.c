#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(580, 350, "random");
	float ***A = create_three_dim_float(520, 320, 670, "random");
	float ***D = create_three_dim_float(410, 980, 920, "random");
	float ***B = create_three_dim_float(590, 50, 460, "random");

	for (int c = 4; c < 670; c++)
	  for (int b = 4; b < 320; b++)
	    for (int a = 4; a < 410; a++)
	    {
	      
	      D[a][b][c]=D[a-4][b-2][c-2]/C[a][b];
	      
	      A[a][b][c]=0.432;
	      A[a-1][b-4][c-4]=0.386;
	    }

    return 0;
}