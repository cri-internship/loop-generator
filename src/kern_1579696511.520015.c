#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(610, 400, "zeros");
	int ***B = create_three_dim_int(970, 800, 790, "zeros");

	for (int d = 0; d < 789; d++)
	  for (int c = 3; c < 399; c++)
	    for (int b = 2; b < 607; b++)
	      for (int a = 2; a < 607; a++)
	      {
	        
	       A[a][b]=A[a+1][b+1]-B[a][b][c];
	        
	       A[a][b]=A[a+3][b]/B[a][b][c];
	        
	       B[a][b][c]=B[a+5][b+3][c+1]+38;
	      }

    return 0;
}