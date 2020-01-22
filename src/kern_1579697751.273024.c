#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(580, 710, 950, "ones");
	int *C = create_one_dim_int(840, "ones");
	int **B = create_two_dim_int(160, 480, "ones");

	for (int d = 0; d < 945; d++)
	  for (int c = 3; c < 480; c++)
	    for (int b = 4; b < 160; b++)
	      for (int a = 4; a < 160; a++)
	      {
	        
	       B[a][b]=B[a-4][b-3]/C[a]-A[a][b][c];
	        
	       C[a]=C[a+3]+16;
	        
	       C[a]=C[a+2]/B[a][b]+29;
	        
	       A[a][b][c]=C[a];
	       A[a+4][b+3][c+3]=C[a];
	        
	       A[a][b][c]=B[a][b];
	        
	       int var_a=A[a][b][c]+34;
	       int var_b=A[a+4][b+4][c+5]-25;
	      }

    return 0;
}