#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(200, 540, "zeros");
	int *B = create_one_dim_int(250, "zeros");
	int **E = create_two_dim_int(650, 220, "zeros");
	int **C = create_two_dim_int(60, 20, "zeros");
	int *D = create_one_dim_int(930, "zeros");

	for (int b = 3; b < 15; b++)
	  for (int a = 4; a < 58; a++)
	  {
	    
	     B[a]=23;
	     float  var_a=B[a]-24;
	    
	     E[a][b]=E[a-4][b-3]*34;
	    
	     C[a][b]=C[a+2][b+5]-E[a][b]+D[a]/A[a][b]*B[a];
	  }

    return 0;
}