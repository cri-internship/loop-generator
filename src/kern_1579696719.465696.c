#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(330, "random");
	int ***C = create_three_dim_int(540, 530, 780, "random");
	int **B = create_two_dim_int(40, 460, "random");

	for (int d = 0; d < 776; d++)
	  for (int c = 0; c < 525; c++)
	    for (int b = 3; b < 330; b++)
	      for (int a = 3; a < 330; a++)
	      {
	        
	       C[a][b][c]=C[a+5][b+5][c+1]/41;
	        
	       C[a][b][c]=C[a+2][b+1][c+4]-24;
	        
	       A[a]=41;
	       A[a]=10;
	        
	       int var_a=A[a]-9;
	       int var_b=A[a-3]/40;
	      }

    return 0;
}