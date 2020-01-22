#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(690, 150, "zeros");
	int ***A = create_three_dim_int(940, 910, 20, "zeros");
	int **B = create_two_dim_int(200, 720, "zeros");

	for (int b = 2; b < 150; b++)
	  for (int a = 1; a < 690; a++)
	  {
	    
	     C[a][b]=C[a-1][b-2]*28;
	    
	     C[a][b]=C[a][b-2]+47;
	    
	     A[a][b][a]=A[a+3][b+2][a+5]*15;
	  }

    return 0;
}