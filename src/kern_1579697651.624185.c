#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(220, "zeros");
	int **B = create_two_dim_int(300, 600, "zeros");
	int *C = create_one_dim_int(150, "zeros");

	for (int b = 4; b < 600; b++)
	  for (int a = 3; a < 296; a++)
	  {
	    
	     B[a][b]=B[a][b-1]/10;
	    
	     B[a][b]=B[a+4][b]+7;
	    
	     B[a][b]=B[a][b]*14;
	     C[a]=B[a-3][b-4]-C[a];
	  }

    return 0;
}