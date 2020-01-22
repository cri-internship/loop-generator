#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(880, 420, "random");
	int **A = create_two_dim_int(150, 530, "random");

	for (int c = 2; c < 419; c++)
	  for (int b = 4; b < 150; b++)
	    for (int a = 4; a < 150; a++)
	    {
	      
	      A[a][b]=A[a-4][b-2]*38;
	      
	      B[a][b]=A[a][b];
	      B[a+3][b+1]=10;
	      
	      B[a][b]=A[a][b]*B[a][b];
	    }

    return 0;
}