#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(780, 910, 870, "random");
	int ***A = create_three_dim_int(380, 190, 640, "random");

	for (int d = 3; d < 640; d++)
	  for (int c = 2; c < 190; c++)
	    for (int b = 2; b < 380; b++)
	      for (int a = 2; a < 380; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-2][c-3]/0;
	        
	       B[a][b][c]=A[a][b][c];
	       B[a+2][b+3][c+5]=A[a][b][c];
	        
	       B[a][b][c]=41;
	      }

    return 0;
}