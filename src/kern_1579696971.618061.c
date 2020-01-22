#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(50, 700, 240, "ones");
	int *B = create_one_dim_int(530, "ones");
	int **A = create_two_dim_int(70, 600, "ones");

	for (int d = 0; d < 235; d++)
	  for (int c = 0; c < 598; c++)
	    for (int b = 0; b < 49; b++)
	      for (int a = 0; a < 49; a++)
	      {
	        
	       A[a][b]=A[a+5][b+2]/6;
	        
	       C[a][b][c]=A[a][b];
	       C[a+1][b+1][c+5]=B[a];
	      }

    return 0;
}