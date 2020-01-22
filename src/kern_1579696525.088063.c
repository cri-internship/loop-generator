#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(930, 90, "ones");
	int **A = create_two_dim_int(850, 1000, "ones");

	for (int b = 4; b < 86; b++)
	  for (int a = 2; a < 848; a++)
	  {
	    
	     A[a][b]=A[a-2][b-4]-34;
	    
	     A[a][b]=A[a+2][b]-50;
	    
	     B[a][b]=B[a+4][b+4]-A[a][b];
	    
	     B[a][b]=B[a+3][b+4]*A[a][b];
	    
	     A[a][b]=A[a+2][b+3]/10;
	    
	     B[a][b]=B[a+1][b+3]-33;
	  }

    return 0;
}