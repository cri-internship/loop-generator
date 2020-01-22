#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(470, 140, 690, "ones");

	for (int d = 4; d < 686; d++)
	  for (int c = 3; c < 138; c++)
	    for (int b = 5; b < 465; b++)
	      for (int a = 5; a < 465; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-3][c-4]*30;
	        
	       A[a][b][c]=A[a+5][b+2][c+1]*0;
	        
	       A[a][b][c]=A[a+5][b+2][c+4]+22;
	      }

    return 0;
}