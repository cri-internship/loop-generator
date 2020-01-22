#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(40, 340, 280, "ones");
	int *C = create_one_dim_int(150, "ones");
	int **B = create_two_dim_int(240, 50, "ones");
	int **D = create_two_dim_int(450, 350, "ones");

	for (int b = 0; b < 49; b++)
	  for (int a = 5; a < 150; a++)
	  {
	    
	     C[a]=C[a-5]+17;
	    
	     D[a][b]=D[a-2][b]*B[a][b];
	    
	     D[a][b]=D[a][b+1]/11;
	    
	     B[a][b]=B[a+1][b+1]-5;
	    
	     B[a][b]=B[a+3][b+1]*D[a][b];
	  }

    return 0;
}