#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(160, 150, "random");
	int ***A = create_three_dim_int(940, 1000, 720, "random");

	for (int d = 4; d < 715; d++)
	  for (int c = 1; c < 149; c++)
	    for (int b = 0; b < 156; b++)
	      for (int a = 0; a < 156; a++)
	      {
	        
	       A[a][b][c]=A[a+1][b+2][c+5]+30;
	        
	       B[a][b]=B[a+4][b+1]-24;
	        
	       A[a][b][c]=A[a+3][b+5][c+2]/B[a][b];
	      }

    return 0;
}