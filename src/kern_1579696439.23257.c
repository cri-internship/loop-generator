#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(970, "ones");
	int ***D = create_three_dim_int(160, 180, 110, "ones");
	int ***B = create_three_dim_int(940, 290, 740, "ones");
	int ***C = create_three_dim_int(200, 50, 290, "ones");

	for (int d = 0; d < 289; d++)
	  for (int c = 0; c < 46; c++)
	    for (int b = 0; b < 195; b++)
	      for (int a = 0; a < 195; a++)
	      {
	        
	       C[a][b][c]=C[a+4][b+3][c+1]*B[a][b][c];
	        
	       int var_a=A[a]/0;
	       A[a]=2;
	        
	       int var_b=C[a][b][c]*31;
	       int var_c=C[a+5][b+4][c]-42;
	      }

    return 0;
}