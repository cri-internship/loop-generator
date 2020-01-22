#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(500, 290, 990, "zeros");
	int **A = create_two_dim_int(610, 280, "zeros");

	for (int d = 2; d < 985; d++)
	  for (int c = 4; c < 279; c++)
	    for (int b = 4; b < 495; b++)
	      for (int a = 4; a < 495; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-4][c-2]+28;
	        
	       B[a][b][c]=B[a+3][b+5][c+5]/A[a][b];
	        
	       B[a][b][c]=B[a+5][b+2][c+1]-A[a][b];
	        
	       A[a][b]=A[a+5][b+1]+19;
	      }

    return 0;
}