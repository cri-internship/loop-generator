#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(170, 780, 50, "zeros");
	float ***B = create_three_dim_float(760, 480, 450, "zeros");
	float ***C = create_three_dim_float(180, 910, 320, "zeros");
	float **A = create_two_dim_float(980, 570, "zeros");

	for (int c = 3; c < 50; c++)
	  for (int b = 1; b < 568; b++)
	    for (int a = 3; a < 170; a++)
	    {
	      
	      D[a][b][c]=D[a-3][b-1][c-3]/0.58;
	      
	      A[a][b]=0.841-B[a][b][c];
	      A[a+5][b+2]=0.074;
	    }

    return 0;
}