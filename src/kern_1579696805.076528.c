#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(950, 560, 290, "ones");
	int ***A = create_three_dim_int(380, 760, 870, "ones");
	int *D = create_one_dim_int(610, "ones");
	int **C = create_two_dim_int(150, 970, "ones");

	for (int d = 1; d < 290; d++)
	  for (int c = 3; c < 560; c++)
	    for (int b = 4; b < 150; b++)
	      for (int a = 4; a < 150; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b][c-1]*C[a][b]-D[a]/A[a][b][c];
	        
	       C[a][b]=C[a-4][b-3]/B[a][b][c];
	        
	       D[a]=18;
	       D[a-1]=10;
	      }

    return 0;
}