#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(30, "ones");
	int **D = create_two_dim_int(750, 330, "ones");
	int **E = create_two_dim_int(270, 100, "ones");
	int ***C = create_three_dim_int(610, 270, 340, "ones");
	int **A = create_two_dim_int(410, 80, "ones");

	for (int d = 0; d < 95; d++)
	  for (int c = 4; c < 30; c++)
	    for (int b = 4; b < 30; b++)
	      for (int a = 4; a < 30; a++)
	      {
	        
	       E[a][b]=E[a+3][b+4]+D[a][b]-B[a]/C[a][b][c];
	        
	       E[a][b]=E[a+4][b+5]*43;
	        
	       E[a][b]=E[a][b+2]*43;
	        
	       int var_a=B[a]*11;
	       int var_b=B[a-4]*2;
	      }

    return 0;
}