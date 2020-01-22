#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(450, 460, 600, "zeros");

	for (int d = 5; d < 597; d++)
	  for (int c = 2; c < 458; c++)
	    for (int b = 3; b < 448; b++)
	      for (int a = 3; a < 448; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-2][c-5]+5;
	        
	       A[a][b][c]=A[a+1][b+2][c+3]-49;
	        
	       int var_a=A[a][b][c]+23;
	       int var_b=A[a+2][b+1][c+2]/39;
	      }

    return 0;
}