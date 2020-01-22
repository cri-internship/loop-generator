#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(670, "zeros");
	int *E = create_one_dim_int(710, "zeros");
	int ***C = create_three_dim_int(560, 230, 140, "zeros");
	int **D = create_two_dim_int(420, 10, "zeros");
	int **A = create_two_dim_int(50, 440, "zeros");

	for (int d = 3; d < 140; d++)
	  for (int c = 2; c < 10; c++)
	    for (int b = 5; b < 50; b++)
	      for (int a = 5; a < 50; a++)
	      {
	        
	       D[a][b]=D[a-3][b-2]-22;
	        
	       A[a][b]=A[a-5][b-2]+41;
	        
	       C[a][b][c]=42;
	       C[a][b-1][c-3]=14;
	      }

    return 0;
}