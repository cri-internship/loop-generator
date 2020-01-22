#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(660, 20, "ones");
	int ***B = create_three_dim_int(350, 580, 290, "ones");
	int *A = create_one_dim_int(340, "ones");
	int **D = create_two_dim_int(990, 310, "ones");

	for (int d = 1; d < 310; d++)
	  for (int c = 4; c < 990; c++)
	    for (int b = 4; b < 990; b++)
	      for (int a = 4; a < 990; a++)
	      {
	        
	       D[a][b]=D[a][b]-A[a]*B[a][b][c];
	       B[a][b][c]=D[a-4][b-1]-C[a][b]/B[a][b][c];
	      }

    return 0;
}