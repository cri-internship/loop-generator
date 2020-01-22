#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(530, 110, 690, "ones");
	int ***B = create_three_dim_int(550, 600, 90, "ones");
	int *C = create_one_dim_int(520, "ones");

	for (int d = 0; d < 687; d++)
	  for (int c = 0; c < 105; c++)
	    for (int b = 0; b < 527; b++)
	      for (int a = 0; a < 527; a++)
	      {
	        
	       A[a][b][c]=A[a+1][b+5][c+3]-B[a][b][c]+C[a];
	        
	       A[a][b][c]=B[a][b][c];
	      }

    return 0;
}