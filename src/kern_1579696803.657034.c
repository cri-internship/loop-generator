#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(110, 250, 400, "ones");
	int **B = create_two_dim_int(200, 990, "ones");

	for (int d = 0; d < 398; d++)
	  for (int c = 3; c < 247; c++)
	    for (int b = 5; b < 106; b++)
	      for (int a = 5; a < 106; a++)
	      {
	        
	       B[a][b]=B[a-5][b-3]*42;
	        
	       A[a][b][c]=A[a+2][b+3][c+2]/B[a][b];
	        
	       B[a][b]=A[a][b][c]+B[a][b];
	       A[a][b][c]=A[a+4][b+3][c+2]*B[a][b];
	      }

    return 0;
}