#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(40, 910, 250, "random");
	int **B = create_two_dim_int(380, 410, "random");

	for (int c = 4; c < 248; c++)
	  for (int b = 1; b < 410; b++)
	    for (int a = 4; a < 40; a++)
	    {
	      
	      A[a][b][c]=A[a][b][c+1]-39;
	      
	      A[a][b][c]=21;
	      
	      B[a][b]=18;
	      B[a-2][b]=20;
	      
	      B[a][b]=36;
	      
	      A[a][b][c]=A[a][b][c]*B[a][b];
	      B[a][b]=A[a-4][b][c-4]*B[a][b];
	    }

    return 0;
}