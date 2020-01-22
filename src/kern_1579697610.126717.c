#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(530, 560, "ones");
	int *B = create_one_dim_int(280, "ones");
	int ***A = create_three_dim_int(270, 80, 20, "ones");
	int ***D = create_three_dim_int(280, 970, 320, "ones");

	for (int b = 0; b < 555; b++)
	  for (int a = 0; a < 275; a++)
	  {
	    
	     B[a]=B[a+5]/3;
	    
	     int var_a=C[a][b]+8;
	     int var_b=C[a][b+5]-25;
	  }

    return 0;
}