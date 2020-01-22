#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(250, "ones");
	int *B = create_one_dim_int(410, "ones");
	int **D = create_two_dim_int(880, 600, "ones");
	int *C = create_one_dim_int(50, "ones");
	int ***A = create_three_dim_int(900, 580, 410, "ones");

	for (int b = 0; b < 579; b++)
	  for (int a = 0; a < 409; a++)
	  {
	    
	     B[a]=B[a+1]/42;
	    
	     A[a][b][a]=41-D[a][b];
	     A[a+1][b+1][a+2]=E[a];
	    
	     D[a][b]=40;
	     D[a+2][b]=20;
	  }

    return 0;
}