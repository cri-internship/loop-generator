#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(620, "zeros");
	int **B = create_two_dim_int(450, 310, "zeros");
	int ***A = create_three_dim_int(20, 660, 220, "zeros");

	for (int d = 3; d < 215; d++)
	  for (int c = 5; c < 307; c++)
	    for (int b = 3; b < 16; b++)
	      for (int a = 3; a < 16; a++)
	      {
	        
	       B[a][b]=B[a-3][b-2]-A[a][b][c]+17;
	        
	       B[a][b]=B[a-2][b-5]+5;
	        
	       A[a][b][c]=A[a-2][b-3][c-3]+20;
	        
	       B[a][b]=B[a][b-1]-A[a][b][c];
	        
	       B[a][b]=B[a+3][b+3]*32;
	        
	       A[a][b][c]=21;
	      }

    return 0;
}