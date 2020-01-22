#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(180, 320, 570, "zeros");
	int ***A = create_three_dim_int(500, 150, 200, "zeros");

	for (int d = 5; d < 195; d++)
	  for (int c = 3; c < 146; c++)
	    for (int b = 5; b < 177; b++)
	      for (int a = 5; a < 177; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b][c-2]*26;
	        
	       B[a][b][c]=B[a-2][b-2][c-1]+A[a][b][c];
	        
	       B[a][b][c]=B[a-5][b-3][c-5]/38;
	        
	       A[a][b][c]=13;
	       A[a+2][b+4][c+5]=15;
	        
	       int var_a=A[a][b][c]/44;
	       int var_b=A[a+5][b+3][c+5]/0;
	      }

    return 0;
}