#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(80, 830, "ones");
	int ***C = create_three_dim_int(960, 120, 790, "ones");
	int ***B = create_three_dim_int(370, 160, 410, "ones");

	for (int c = 4; c < 410; c++)
	  for (int b = 5; b < 120; b++)
	    for (int a = 5; a < 76; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b-4][c-1]*2;
	      
	      A[a][b]=A[a-4][b-5]*11;
	      
	      B[a][b][c]=B[a-1][b-2][c]+A[a][b];
	      
	      C[a][b][c]=C[a-5][b-1][c-4]/42;
	      
	      A[a][b]=A[a+1][b+2]-C[a][b][c];
	      
	      A[a][b]=A[a+4][b]-B[a][b][c];
	    }

    return 0;
}