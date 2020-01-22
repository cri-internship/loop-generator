#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(250, 290, "ones");
	int ***A = create_three_dim_int(670, 690, 420, "ones");

	for (int c = 1; c < 416; c++)
	  for (int b = 2; b < 290; b++)
	    for (int a = 4; a < 250; a++)
	    {
	      
	      B[a][b]=B[a-4][b-2]-24;
	      
	      A[a][b][c]=9;
	      A[a-4][b-2][c-1]=5;
	      
	      B[a][b]=A[a][b][c]*B[a][b];
	      A[a][b][c]=A[a+5][b+5][c+4]+B[a][b];
	    }

    return 0;
}