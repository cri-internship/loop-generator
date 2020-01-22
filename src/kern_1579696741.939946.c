#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(580, 510, "zeros");
	int ***A = create_three_dim_int(560, 140, 240, "zeros");

	for (int d = 0; d < 236; d++)
	  for (int c = 3; c < 136; c++)
	    for (int b = 2; b < 555; b++)
	      for (int a = 2; a < 555; a++)
	      {
	        
	       B[a][b]=17;
	       B[a][b]=40;
	        
	       A[a][b][c]=B[a][b];
	       A[a-2][b-3][c]=B[a][b];
	        
	       A[a][b][c]=A[a][b][c]*B[a][b];
	       B[a][b]=A[a+5][b+4][c+4]+24;
	        
	       A[a][b][c]=B[a][b]-A[a][b][c];
	       B[a][b]=B[a-2][b-1]/4;
	        
	       B[a][b]=B[a][b]-A[a][b][c];
	       B[a][b]=B[a+1][b+5]*A[a][b][c];
	      }

    return 0;
}