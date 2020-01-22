#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(620, 890, 170, "zeros");
	int ***B = create_three_dim_int(970, 850, 470, "zeros");
	int ***A = create_three_dim_int(130, 150, 200, "zeros");

	for (int d = 0; d < 198; d++)
	  for (int c = 0; c < 147; c++)
	    for (int b = 0; b < 130; b++)
	      for (int a = 0; a < 130; a++)
	      {
	        
	       A[a][b][c]=A[a][b+3][c+2]/17;
	      }

    return 0;
}