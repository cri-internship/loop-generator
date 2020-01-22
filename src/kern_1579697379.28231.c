#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(310, "zeros");
	int ***A = create_three_dim_int(880, 950, 700, "zeros");

	for (int d = 0; d < 695; d++)
	  for (int c = 0; c < 946; c++)
	    for (int b = 3; b < 310; b++)
	      for (int a = 3; a < 310; a++)
	      {
	        
	       B[a]=B[a-3]-A[a][b][c];
	        
	       B[a]=6;
	        
	       A[a][b][c]=A[a+2][b+3][c+2]*40;
	        
	       A[a][b][c]=A[a+1][b][c+5]+B[a];
	        
	       A[a][b][c]=A[a+3][b+4][c+4]+0;
	      }

    return 0;
}