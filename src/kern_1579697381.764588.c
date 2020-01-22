#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(300, 10, "ones");
	int *A = create_one_dim_int(180, "ones");
	int ***D = create_three_dim_int(850, 340, 180, "ones");
	int *E = create_one_dim_int(650, "ones");
	int **B = create_two_dim_int(310, 750, "ones");

	for (int d = 2; d < 180; d++)
	  for (int c = 4; c < 340; c++)
	    for (int b = 4; b < 650; b++)
	      for (int a = 4; a < 650; a++)
	      {
	        
	       E[a]=C[a][b]*B[a][b];
	       E[a-4]=A[a]-D[a][b][c];
	        
	       int var_a=D[a][b][c]-40;
	       int var_b=D[a-3][b-4][c-2]/21;
	      }

    return 0;
}