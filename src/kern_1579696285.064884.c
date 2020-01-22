#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(650, 790, "ones");
	int **C = create_two_dim_int(100, 970, "ones");
	int *B = create_one_dim_int(950, "ones");
	int ***D = create_three_dim_int(590, 10, 980, "ones");
	int **A = create_two_dim_int(800, 590, "ones");

	for (int d = 4; d < 950; d++)
	  for (int c = 4; c < 950; c++)
	    for (int b = 4; b < 950; b++)
	      for (int a = 4; a < 950; a++)
	      {
	        
	       B[a]=16;
	       float  var_a=B[a]*30;
	        
	       D[a][b][c]=B[a]+E[a][b]/A[a][b];
	       E[a][b]=B[a-4]*2+C[a][b]/A[a][b]-C[a][b];
	      }

    return 0;
}