#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(570, 790, "zeros");
	int **A = create_two_dim_int(730, 460, "zeros");
	int **C = create_two_dim_int(130, 160, "zeros");

	for (int b = 3; b < 160; b++)
	  for (int a = 3; a < 130; a++)
	  {
	    
	     B[a][b]=B[a][b-3]+33;
	    
	     B[a][b]=B[a][b+3]+A[a][b]-C[a][b];
	    
	     A[a][b]=A[a+4][b]-49;
	    
	     B[a][b]=B[a+2][b+4]/C[a][b]-A[a][b];
	    
	     C[a][b]=49;
	     C[a-3][b-1]=27;
	  }

    return 0;
}