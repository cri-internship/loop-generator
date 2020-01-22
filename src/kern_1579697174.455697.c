#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(270, 20, 940, "ones");
	int **B = create_two_dim_int(40, 110, "ones");

	for (int c = 5; c < 940; c++)
	  for (int b = 3; b < 20; b++)
	    for (int a = 2; a < 37; a++)
	    {
	      
	      A[a][b][c]=A[a][b][c-1]+B[a][b];
	      
	      A[a][b][c]=A[a][b-1][c-1]+36;
	      
	      B[a][b]=B[a][b-3]+9;
	      
	      B[a][b]=B[a][b+2]/6;
	    }

    return 0;
}