#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(300, 50, "ones");
	int *A = create_one_dim_int(120, "ones");
	int **C = create_two_dim_int(490, 410, "ones");

	for (int b = 4; b < 45; b++)
	  for (int a = 4; a < 295; a++)
	  {
	    
	     B[a][b]=B[a-4][b-1]/26;
	    
	     B[a][b]=35;
	    
	     int var_a=B[a][b]+50;
	     int var_b=B[a-2][b-4]*8;
	    
	     int var_c=B[a][b]*41;
	     int var_d=B[a+1][b+3]/15;
	  }

    return 0;
}