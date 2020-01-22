#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(860, 80, 260, "random");
	int ***A = create_three_dim_int(670, 540, 970, "random");

	for (int d = 3; d < 257; d++)
	  for (int c = 5; c < 75; c++)
	    for (int b = 5; b < 860; b++)
	      for (int a = 5; a < 860; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-5][c-2]-9;
	        
	       B[a][b][c]=B[a][b+5][c+1]*A[a][b][c];
	        
	       B[a][b][c]=B[a][b][c]/A[a][b][c];
	       A[a][b][c]=B[a][b+3][c+2]+33;
	        
	       B[a][b][c]=B[a][b][c]/A[a][b][c];
	       A[a][b][c]=B[a][b][c+3]+A[a][b][c];
	      }

    return 0;
}