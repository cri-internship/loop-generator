#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(380, 570, "zeros");
	int **C = create_two_dim_int(250, 500, "zeros");
	int **B = create_two_dim_int(990, 330, "zeros");

	for (int b = 3; b < 327; b++)
	  for (int a = 5; a < 246; a++)
	  {
	    
	     B[a][b]=B[a][b+3]*13;
	    
	     C[a][b]=A[a][b];
	     C[a+3][b]=31/B[a][b];
	    
	     B[a][b]=C[a][b];
	    
	     A[a][b]=C[a][b];
	     A[a-4][b-3]=C[a][b]-B[a][b];
	    
	     A[a][b]=C[a][b]/22;
	     B[a][b]=C[a-1][b-1]*24+B[a][b];
	    
	     int var_a=C[a][b]*23;
	     int var_b=C[a+4][b+3]+19;
	  }

    return 0;
}