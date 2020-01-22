#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(600, 460, 470, "ones");
	int ***B = create_three_dim_int(210, 670, 430, "ones");

	for (int d = 5; d < 430; d++)
	  for (int c = 2; c < 455; c++)
	    for (int b = 4; b < 210; b++)
	      for (int a = 4; a < 210; a++)
	      {
	        
	       B[a][b][c]=B[a][b][c-4]-10;
	        
	       A[a][b][c]=A[a][b+2][c+1]-26;
	        
	       A[a][b][c]=A[a+4][b+3][c+2]+31;
	        
	       int var_a=B[a][b][c]-12;
	       int var_b=B[a-4][b-2][c-5]*8;
	      }

    return 0;
}