#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(120, "zeros");
	int ***A = create_three_dim_int(730, 60, 290, "zeros");
	int **C = create_two_dim_int(270, 460, "zeros");
	int *D = create_one_dim_int(550, "zeros");

	for (int d = 5; d < 290; d++)
	  for (int c = 5; c < 60; c++)
	    for (int b = 4; b < 270; b++)
	      for (int a = 4; a < 270; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-5][c-3]*10;
	        
	       D[a]=C[a][b];
	       A[a][b][c]=D[a]-A[a][b][c];
	        
	       C[a][b]=C[a-1][b-3]-4;
	        
	       C[a][b]=C[a-3][b-2]/50;
	        
	       D[a]=18;
	      }

    return 0;
}