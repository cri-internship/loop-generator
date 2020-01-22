#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(400, "zeros");
	int **B = create_two_dim_int(360, 750, "zeros");
	int ***C = create_three_dim_int(50, 750, 370, "zeros");

	for (int d = 3; d < 366; d++)
	  for (int c = 4; c < 747; c++)
	    for (int b = 3; b < 50; b++)
	      for (int a = 3; a < 50; a++)
	      {
	        
	       A[a]=A[a-3]-10;
	        
	       C[a][b][c]=C[a-2][b-2][c-1]*A[a];
	        
	       C[a][b][c]=B[a][b]+B[a][b];
	      }

    return 0;
}