#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(250, "ones");
	int ***A = create_three_dim_int(690, 230, 410, "ones");
	int **B = create_two_dim_int(70, 270, "ones");

	for (int b = 0; b < 226; b++)
	  for (int a = 5; a < 68; a++)
	  {
	    
	     C[a]=C[a+3]/33;
	    
	     C[a]=C[a+4]/5;
	    
	     A[a][b][a]=41;
	     A[a][b+4][a+4]=8;
	    
	     int var_a=B[a][b]*38;
	     int var_b=B[a+2][b]*41;
	    
	     B[a][b]=A[a][b][a]/C[a];
	     C[a]=A[a-5][b][a-4]*B[a][b];
	  }

    return 0;
}