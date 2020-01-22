#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(350, 550, 200, "ones");
	float ***B = create_three_dim_float(980, 610, 290, "ones");

	for (int d = 3; d < 200; d++)
	  for (int c = 5; c < 550; c++)
	    for (int b = 4; b < 350; b++)
	      for (int a = 4; a < 350; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b][c-1]-0.479;
	        
	       A[a][b][c]=A[a-4][b][c-3]*B[a][b][c];
	        
	       A[a][b][c]=A[a-2][b-5][c-2]*0.358;
	        
	       A[a][b][c]=A[a][b][c]/B[a][b][c];
	       B[a][b][c]=A[a-2][b-4][c-1]+B[a][b][c];
	      }

    return 0;
}