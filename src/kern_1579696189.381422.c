#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(790, 490, 570, "ones");
	float **A = create_two_dim_float(540, 840, "ones");

	for (int c = 4; c < 840; c++)
	  for (int b = 5; b < 540; b++)
	    for (int a = 5; a < 540; a++)
	    {
	      
	      A[a][b]=A[a-3][b-4]-B[a][b][c];
	      
	      A[a][b]=A[a-5][b-3]-0.725;
	      
	      B[a][b][c]=A[a][b]*0.745;
	      A[a][b]=A[a-4][b-1]+0.153;
	      
	      B[a][b][c]=A[a][b]*B[a][b][c];
	      B[a][b][c]=A[a-3][b-3]*B[a][b][c];
	    }

    return 0;
}