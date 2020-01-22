#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(310, 1000, "random");
	int ***E = create_three_dim_int(980, 120, 950, "random");
	int **A = create_two_dim_int(570, 540, "random");
	int **D = create_two_dim_int(420, 930, "random");
	int ***C = create_three_dim_int(820, 220, 590, "random");

	for (int d = 5; d < 588; d++)
	  for (int c = 5; c < 120; c++)
	    for (int b = 1; b < 818; b++)
	      for (int a = 1; a < 818; a++)
	      {
	        
	       E[a][b][c]=E[a][b-1][c-5]*26;
	        
	       C[a][b][c]=C[a-1][b-5][c-2]+A[a][b];
	        
	       C[a][b][c]=C[a][b-4][c]*B[a][b];
	        
	       C[a][b][c]=C[a+2][b+1][c+2]*44;
	      }

    return 0;
}