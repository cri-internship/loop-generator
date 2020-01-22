#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(240, 470, 670, "zeros");
	int ***A = create_three_dim_int(430, 880, 1000, "zeros");
	int *E = create_one_dim_int(480, "zeros");
	int **B = create_two_dim_int(380, 520, "zeros");
	int ***D = create_three_dim_int(450, 630, 880, "zeros");

	for (int d = 3; d < 669; d++)
	  for (int c = 0; c < 466; c++)
	    for (int b = 1; b < 238; b++)
	      for (int a = 1; a < 238; a++)
	      {
	        
	       C[a][b][c]=C[a+2][b+4][c+1]/23;
	        
	       A[a][b][c]=E[a]/B[a][b]-C[a][b][c];
	       A[a-1][b][c-3]=D[a][b][c]-35+B[a][b];
	      }

    return 0;
}