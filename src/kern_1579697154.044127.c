#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(710, 520, "zeros");
	int ***B = create_three_dim_int(230, 450, 450, "zeros");

	for (int d = 0; d < 447; d++)
	  for (int c = 4; c < 450; c++)
	    for (int b = 2; b < 229; b++)
	      for (int a = 2; a < 229; a++)
	      {
	        
	       A[a][b]=B[a][b][c];
	       A[a-2][b-4]=10;
	        
	       B[a][b][c]=19;
	       B[a+1][b][c+3]=3;
	      }

    return 0;
}