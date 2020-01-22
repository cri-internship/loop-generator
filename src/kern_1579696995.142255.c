#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(280, 360, 380, "ones");
	int *B = create_one_dim_int(150, "ones");
	int *A = create_one_dim_int(650, "ones");

	for (int b = 5; b < 360; b++)
	  for (int a = 4; a < 280; a++)
	  {
	    
	     C[a][b][a]=C[a-2][b-5][a-1]*13;
	    
	     int var_a=C[a][b][a]-48;
	     int var_b=C[a][b-3][a-4]/20;
	  }

    return 0;
}