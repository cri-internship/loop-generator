#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(690, "ones");
	int ***B = create_three_dim_int(120, 450, 360, "ones");
	int ***D = create_three_dim_int(740, 540, 770, "ones");
	int ***A = create_three_dim_int(810, 720, 10, "ones");

	for (int d = 3; d < 10; d++)
	  for (int c = 5; c < 447; c++)
	    for (int b = 5; b < 120; b++)
	      for (int a = 5; a < 120; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-4][c-2]*25;
	        
	       int var_a=C[a]/41;
	       C[a]=46;
	        
	       B[a][b][c]=B[a][b+3][c+1]/16;
	        
	       A[a][b][c]=29;
	      }

    return 0;
}