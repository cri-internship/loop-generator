#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(150, 890, 380, "ones");

	for (int d = 3; d < 375; d++)
	  for (int c = 4; c < 887; c++)
	    for (int b = 5; b < 147; b++)
	      for (int a = 5; a < 147; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-4][c]-21;
	        
	       A[a][b][c]=A[a-5][b-4][c-1]-28;
	        
	       int var_a=A[a][b][c]*46;
	       int var_b=A[a+3][b+2][c+1]-10;
	      }

    return 0;
}