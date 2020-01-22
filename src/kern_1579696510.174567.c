#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(550, 500, 750, "ones");
	int ***A = create_three_dim_int(180, 600, 70, "ones");

	for (int c = 3; c < 70; c++)
	  for (int b = 2; b < 500; b++)
	    for (int a = 3; a < 180; a++)
	    {
	      
	      B[a][b][c]=A[a][b][c];
	      B[a-1][b-1][c-1]=A[a][b][c];
	      
	      A[a][b][c]=A[a][b][c]-B[a][b][c];
	      B[a][b][c]=A[a-3][b-2][c-3]+B[a][b][c];
	    }

    return 0;
}