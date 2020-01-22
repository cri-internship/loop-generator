#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(480, 520, "ones");
	int ***E = create_three_dim_int(230, 880, 590, "ones");
	int ***B = create_three_dim_int(560, 200, 380, "ones");
	int *A = create_one_dim_int(630, "ones");
	int *C = create_one_dim_int(990, "ones");

	for (int d = 0; d < 588; d++)
	  for (int c = 0; c < 879; c++)
	    for (int b = 2; b < 230; b++)
	      for (int a = 2; a < 230; a++)
	      {
	        
	       E[a][b][c]=E[a][b+1][c+2]-B[a][b][c]+C[a]*D[a][b];
	        
	       int var_a=C[a]+8;
	       int var_b=C[a-2]*31;
	      }

    return 0;
}