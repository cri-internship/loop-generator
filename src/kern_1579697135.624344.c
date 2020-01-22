#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(360, 920, "ones");
	int *D = create_one_dim_int(220, "ones");
	int *A = create_one_dim_int(290, "ones");
	int ***E = create_three_dim_int(1000, 260, 930, "ones");
	int **B = create_two_dim_int(120, 540, "ones");

	for (int b = 0; b < 255; b++)
	  for (int a = 0; a < 118; a++)
	  {
	    
	     E[a][b][a]=E[a][b+5][a+4]*C[a][b]/35;
	    
	     B[a][b]=A[a]+10;
	     A[a]=A[a+5]+B[a][b]/B[a][b];
	    
	     int var_a=B[a][b]*47;
	     int var_b=B[a+2][b+4]*25;
	  }

    return 0;
}