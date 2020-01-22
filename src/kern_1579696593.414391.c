#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(320, 560, 470, "zeros");
	int ***B = create_three_dim_int(1000, 170, 420, "zeros");
	int **A = create_two_dim_int(170, 970, "zeros");

	for (int d = 4; d < 419; d++)
	  for (int c = 4; c < 165; c++)
	    for (int b = 5; b < 316; b++)
	      for (int a = 5; a < 316; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-4][c-2]-6;
	        
	       C[a][b][c]=C[a+4][b+4][c+4]/A[a][b];
	        
	       B[a][b][c]=8;
	        
	       B[a][b][c]=C[a][b][c]/B[a][b][c];
	       C[a][b][c]=C[a][b+5][c+2]/A[a][b]-B[a][b][c];
	      }

    return 0;
}