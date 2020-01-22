#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(620, 90, "zeros");
	int ***B = create_three_dim_int(290, 830, 790, "zeros");

	for (int d = 3; d < 790; d++)
	  for (int c = 5; c < 85; c++)
	    for (int b = 4; b < 290; b++)
	      for (int a = 4; a < 290; a++)
	      {
	        
	       A[a][b]=A[a-1][b-2]*36;
	        
	       B[a][b][c]=B[a-3][b-5][c-1]/15;
	        
	       A[a][b]=A[a+4][b+5]-B[a][b][c];
	        
	       B[a][b][c]=39;
	      }

    return 0;
}