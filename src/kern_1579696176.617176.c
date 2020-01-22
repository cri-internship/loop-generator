#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(10, 510, "ones");
	int ***A = create_three_dim_int(20, 180, 240, "ones");

	for (int c = 0; c < 237; c++)
	  for (int b = 0; b < 178; b++)
	    for (int a = 0; a < 20; a++)
	    {
	      
	      A[a][b][c]=A[a][b][c]/28;
	      B[a][b]=A[a][b+2][c+3]*35;
	    }

    return 0;
}