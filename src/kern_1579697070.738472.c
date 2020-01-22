#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(440, 660, 660, "zeros");
	int **A = create_two_dim_int(70, 200, "zeros");

	for (int c = 0; c < 660; c++)
	  for (int b = 4; b < 196; b++)
	    for (int a = 4; a < 66; a++)
	    {
	      
	      A[a][b]=A[a-4][b-4]-30;
	      
	      A[a][b]=A[a-2][b-3]+B[a][b][c];
	      
	      A[a][b]=A[a+2][b+1]*16;
	      
	      A[a][b]=A[a+4][b+4]*44;
	      
	      B[a][b][c]=46;
	      B[a+4][b+4][c]=A[a][b];
	    }

    return 0;
}