#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(410, 110, "random");
	int **B = create_two_dim_int(270, 890, "random");
	int *A = create_one_dim_int(750, "random");
	int *C = create_one_dim_int(20, "random");

	for (int b = 4; b < 108; b++)
	  for (int a = 1; a < 265; a++)
	  {
	    
	     B[a][b]=B[a+5][b]+23;
	    
	     A[a]=A[a+1]+49;
	    
	     D[a][b]=D[a+2][b+1]/37;
	    
	     A[a]=D[a][b]+B[a][b]/14;
	    
	     D[a][b]=49;
	    
	     int var_a=B[a][b]*21;
	     int var_b=B[a-1][b-4]+14;
	  }

    return 0;
}