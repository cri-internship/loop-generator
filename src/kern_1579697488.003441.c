#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(450, 270, 630, "random");

	for (int d = 3; d < 625; d++)
	  for (int c = 4; c < 267; c++)
	    for (int b = 2; b < 447; b++)
	      for (int a = 2; a < 447; a++)
	      {
	        
	       A[a][b][c]=A[a][b-4][c-2]-0.295;
	        
	       A[a][b][c]=A[a+3][b+1][c+1]-0.254;
	        
	       A[a][b][c]=A[a+1][b+3][c+1]+0.385;
	      }

    return 0;
}