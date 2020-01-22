#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(340, 780, 320, "random");
	int ***A = create_three_dim_int(200, 120, 260, "random");

	for (int d = 2; d < 260; d++)
	  for (int c = 3; c < 120; c++)
	    for (int b = 5; b < 200; b++)
	      for (int a = 5; a < 200; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-3][c-1]*A[a][b][c];
	        
	       A[a][b][c]=A[a-4][b-3][c-2]*46;
	        
	       int var_a=B[a][b][c]-17;
	       int var_b=B[a][b][c-1]*4;
	      }

    return 0;
}