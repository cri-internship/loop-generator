#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(990, 320, 320, "ones");
	int **B = create_two_dim_int(90, 380, "ones");

	for (int c = 1; c < 317; c++)
	  for (int b = 4; b < 315; b++)
	    for (int a = 5; a < 86; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-2][c-1]-B[a][b];
	      
	      B[a][b]=B[a-2][b-2]+30;
	      
	      B[a][b]=B[a+4][b]+A[a][b][c];
	      
	      B[a][b]=B[a+1][b+4]+39;
	      
	      A[a][b][c]=B[a][b];
	    }

    return 0;
}