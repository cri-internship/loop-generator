#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(740, 370, "ones");
	int ***C = create_three_dim_int(360, 50, 670, "ones");
	int ***B = create_three_dim_int(150, 540, 910, "ones");

	for (int d = 4; d < 666; d++)
	  for (int c = 5; c < 47; c++)
	    for (int b = 4; b < 358; b++)
	      for (int a = 4; a < 358; a++)
	      {
	        
	       C[a][b][c]=C[a-2][b-5][c-4]/A[a][b];
	        
	       C[a][b][c]=C[a-4][b-2][c]+B[a][b][c];
	        
	       A[a][b]=A[a+1][b+3]/13+B[a][b][c];
	      }

    return 0;
}