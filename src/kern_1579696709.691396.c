#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(300, 830, 750, "zeros");
	int ***D = create_three_dim_int(90, 820, 210, "zeros");
	int ***A = create_three_dim_int(220, 790, 730, "zeros");
	int **B = create_two_dim_int(380, 90, "zeros");

	for (int d = 2; d < 210; d++)
	  for (int c = 4; c < 790; c++)
	    for (int b = 3; b < 90; b++)
	      for (int a = 3; a < 90; a++)
	      {
	        
	       C[a][b][c]=C[a][b+3][c+3]-44;
	        
	       A[a][b][c]=D[a][b][c];
	       A[a+5][b][c+2]=B[a][b]/C[a][b][c];
	        
	       int var_a=D[a][b][c]/32;
	       int var_b=D[a-3][b-4][c-2]+21;
	      }

    return 0;
}