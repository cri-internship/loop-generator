#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(210, 120, "zeros");
	int ***C = create_three_dim_int(240, 10, 530, "zeros");
	int **A = create_two_dim_int(190, 880, "zeros");

	for (int d = 3; d < 528; d++)
	  for (int c = 4; c < 8; c++)
	    for (int b = 5; b < 190; b++)
	      for (int a = 5; a < 190; a++)
	      {
	        
	       A[a][b]=A[a-5][b-4]-47;
	        
	       C[a][b][c]=C[a-3][b-2][c-3]/20;
	        
	       A[a][b]=A[a-1][b-4]/24;
	        
	       C[a][b][c]=C[a+3][b+2][c+1]-30;
	        
	       C[a][b][c]=C[a+3][b][c+2]-24;
	        
	       B[a][b]=B[a+4][b+1]+C[a][b][c];
	      }

    return 0;
}