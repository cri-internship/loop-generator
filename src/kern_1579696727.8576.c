#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(180, 980, "zeros");
	int ***B = create_three_dim_int(600, 470, 230, "zeros");

	for (int d = 0; d < 977; d++)
	  for (int c = 5; c < 177; c++)
	    for (int b = 5; b < 177; b++)
	      for (int a = 5; a < 177; a++)
	      {
	        
	       A[a][b]=A[a-1][b]-B[a][b][c];
	        
	       A[a][b]=B[a][b][c];
	        
	       int var_a=A[a][b]/21;
	       int var_b=A[a-5][b]*16;
	      }

    return 0;
}