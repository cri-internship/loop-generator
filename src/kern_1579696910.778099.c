#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(350, 750, 350, "zeros");
	int **D = create_two_dim_int(670, 660, "zeros");
	int **B = create_two_dim_int(880, 190, "zeros");
	int **C = create_two_dim_int(750, 430, "zeros");

	for (int b = 4; b < 188; b++)
	  for (int a = 4; a < 350; a++)
	  {
	    
	     C[a][b]=C[a-4][b-1]-D[a][b];
	    
	     C[a][b]=C[a+4][b+4]+33;
	    
	     B[a][b]=7;
	     B[a+4][b+2]=11;
	    
	     B[a][b]=C[a][b]/A[a][b][a]-D[a][b];
	    
	     D[a][b]=10-C[a][b];
	     D[a][b]=A[a][b][a];
	    
	     int var_a=A[a][b][a]+30;
	     int var_b=A[a][b-4][a-1]-25;
	  }

    return 0;
}