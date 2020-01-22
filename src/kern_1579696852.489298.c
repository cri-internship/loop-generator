#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(820, 930, "random");
	int **C = create_two_dim_int(250, 310, "random");
	int **B = create_two_dim_int(270, 270, "random");

	for (int c = 2; c < 307; c++)
	  for (int b = 2; b < 246; b++)
	    for (int a = 2; a < 246; a++)
	    {
	      
	      C[a][b]=C[a+3][b]+28;
	      
	      C[a][b]=C[a+4][b+3]-27;
	      
	      A[a][b]=A[a+1][b+5]/C[a][b];
	      
	      A[a][b]=22;
	    }

    return 0;
}