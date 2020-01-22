#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(940, 800, 490, "zeros");
	int ***A = create_three_dim_int(480, 310, 530, "zeros");

	for (int d = 0; d < 488; d++)
	  for (int c = 0; c < 305; c++)
	    for (int b = 0; b < 475; b++)
	      for (int a = 0; a < 475; a++)
	      {
	        
	       A[a][b][c]=A[a+2][b+4][c+3]*44;
	        
	       A[a][b][c]=A[a+5][b+5][c+2]*34;
	        
	       B[a][b][c]=B[a+5][b+3][c+2]-46;
	        
	       A[a][b][c]=A[a][b][c]/45;
	       B[a][b][c]=A[a+1][b+1][c+2]+B[a][b][c];
	      }

    return 0;
}