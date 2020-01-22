#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(180, 210, 580, "zeros");
	int **B = create_two_dim_int(110, 750, "zeros");

	for (int d = 3; d < 577; d++)
	  for (int c = 1; c < 206; c++)
	    for (int b = 2; b < 106; b++)
	      for (int a = 2; a < 106; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-1][c-3]/B[a][b];
	        
	       B[a][b]=B[a+1][b+3]/4;
	        
	       A[a][b][c]=A[a+4][b+4][c+3]-B[a][b];
	        
	       int var_a=B[a][b]-25;
	       B[a][b]=46;
	        
	       A[a][b][c]=A[a][b][c]-0;
	       B[a][b]=A[a+1][b+4][c+2]-B[a][b];
	      }

    return 0;
}