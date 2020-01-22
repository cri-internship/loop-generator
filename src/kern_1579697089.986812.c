#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(120, 680, "ones");
	int ***D = create_three_dim_int(580, 950, 690, "ones");
	int *B = create_one_dim_int(510, "ones");
	int **C = create_two_dim_int(590, 960, "ones");

	for (int d = 0; d < 685; d++)
	  for (int c = 0; c < 680; c++)
	    for (int b = 0; b < 119; b++)
	      for (int a = 0; a < 119; a++)
	      {
	        
	       A[a][b]=A[a+1][b]+C[a][b]/B[a];
	        
	       A[a][b]=D[a][b][c]/A[a][b]-B[a];
	       C[a][b]=D[a+2][b+3][c+5]/39;
	      }

    return 0;
}