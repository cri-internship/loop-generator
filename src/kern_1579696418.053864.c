#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(20, 420, 10, "random");
	int ***A = create_three_dim_int(870, 180, 350, "random");

	for (int d = 3; d < 5; d++)
	  for (int c = 3; c < 180; c++)
	    for (int b = 5; b < 15; b++)
	      for (int a = 5; a < 15; a++)
	      {
	        
	       B[a][b][c]=A[a][b][c];
	       B[a+5][b+5][c]=A[a][b][c];
	        
	       A[a][b][c]=B[a][b][c];
	       A[a-5][b-3][c-3]=B[a][b][c];
	        
	       B[a][b][c]=B[a][b][c]/A[a][b][c];
	       A[a][b][c]=B[a+1][b+4][c+5]-A[a][b][c];
	      }

    return 0;
}