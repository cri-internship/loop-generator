#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(760, 970, 160, "zeros");
	int ***A = create_three_dim_int(920, 50, 600, "zeros");
	int *B = create_one_dim_int(410, "zeros");

	for (int d = 3; d < 600; d++)
	  for (int c = 0; c < 50; c++)
	    for (int b = 4; b < 410; b++)
	      for (int a = 4; a < 410; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b][c-1]-B[a];
	        
	       B[a]=23;
	       B[a]=21;
	        
	       B[a]=A[a][b][c]-B[a]*C[a][b][c];
	       C[a][b][c]=A[a-1][b][c-3]/C[a][b][c];
	      }

    return 0;
}