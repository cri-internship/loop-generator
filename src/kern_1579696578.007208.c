#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(210, 1000, 950, "random");
	int ***A = create_three_dim_int(500, 690, 240, "random");
	int *C = create_one_dim_int(950, "random");

	for (int d = 0; d < 238; d++)
	  for (int c = 0; c < 685; c++)
	    for (int b = 0; b < 207; b++)
	      for (int a = 0; a < 207; a++)
	      {
	        
	       A[a][b][c]=A[a+3][b+5][c+2]/44;
	        
	       A[a][b][c]=A[a+1][b+5][c]/2-B[a][b][c];
	        
	       B[a][b][c]=B[a+3][b+5][c+4]+A[a][b][c];
	      }

    return 0;
}