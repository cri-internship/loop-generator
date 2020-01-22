#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(590, 800, "random");
	int ***E = create_three_dim_int(50, 560, 230, "random");
	int *A = create_one_dim_int(120, "random");
	int ***D = create_three_dim_int(690, 790, 700, "random");
	int ***C = create_three_dim_int(520, 590, 600, "random");

	for (int d = 5; d < 230; d++)
	  for (int c = 4; c < 560; c++)
	    for (int b = 5; b < 50; b++)
	      for (int a = 5; a < 50; a++)
	      {
	        
	       C[a][b][c]=C[a-5][b-1][c-5]-D[a][b][c]+E[a][b][c]/A[a];
	        
	       int var_a=E[a][b][c]*40;
	       int var_b=E[a][b-4][c-4]+31;
	      }

    return 0;
}