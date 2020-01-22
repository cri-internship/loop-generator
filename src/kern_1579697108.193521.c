#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(800, 180, 870, "ones");
	int **B = create_two_dim_int(800, 550, "ones");

	for (int c = 3; c < 870; c++)
	  for (int b = 2; b < 180; b++)
	    for (int a = 5; a < 796; a++)
	    {
	      
	      B[a][b]=B[a-5][b-1]*47;
	      
	      A[a][b][c]=A[a+4][b][c]/25;
	      
	      B[a][b]=A[a][b][c]/23;
	      A[a][b][c]=A[a-3][b][c]+B[a][b];
	      
	      B[a][b]=A[a][b][c]-B[a][b];
	      B[a][b]=A[a-4][b-2][c-3]+B[a][b];
	    }

    return 0;
}