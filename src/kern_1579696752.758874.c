#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(370, 60, 960, "zeros");
	int ***B = create_three_dim_int(580, 930, 240, "zeros");

	for (int d = 4; d < 240; d++)
	  for (int c = 5; c < 57; c++)
	    for (int b = 4; b < 367; b++)
	      for (int a = 4; a < 367; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-3][c-2]+5;
	        
	       B[a][b][c]=B[a-4][b-5][c-2]-46;
	        
	       A[a][b][c]=A[a][b+3][c+4]/28;
	        
	       A[a][b][c]=21;
	        
	       int var_a=B[a][b][c]+37;
	       int var_b=B[a-3][b-4][c-4]/12;
	        
	       B[a][b][c]=A[a][b][c]/B[a][b][c];
	       A[a][b][c]=A[a+3][b+2][c+4]+B[a][b][c];
	      }

    return 0;
}