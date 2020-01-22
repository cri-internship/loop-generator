#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(90, 880, 320, "zeros");
	int ***A = create_three_dim_int(240, 950, 540, "zeros");
	int **B = create_two_dim_int(30, 590, "zeros");

	for (int d = 5; d < 320; d++)
	  for (int c = 4; c < 587; c++)
	    for (int b = 5; b < 28; b++)
	      for (int a = 5; a < 28; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-4][c]+42;
	        
	       C[a][b][c]=C[a][b-3][c-5]*38;
	        
	       B[a][b]=3;
	       B[a][b-1]=48;
	        
	       B[a][b]=21;
	        
	       int var_a=B[a][b]*25;
	       int var_b=B[a+2][b+3]-50;
	      }

    return 0;
}