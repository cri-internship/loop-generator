#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(540, 900, "ones");
	int **A = create_two_dim_int(440, 680, "ones");

	for (int b = 3; b < 678; b++)
	  for (int a = 2; a < 435; a++)
	  {
	    
	     A[a][b]=A[a-2][b-3]+B[a][b];
	    
	     A[a][b]=A[a+5][b+2]+3;
	    
	     A[a][b]=A[a+2][b+2]-B[a][b];
	    
	     B[a][b]=B[a][b]-A[a][b];
	     A[a][b]=B[a+5][b+4]/35;
	  }

    return 0;
}