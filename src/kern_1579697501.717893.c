#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(400, 120, 210, "zeros");
	int ***D = create_three_dim_int(990, 250, 360, "zeros");
	int *E = create_one_dim_int(440, "zeros");
	int *A = create_one_dim_int(850, "zeros");
	int ***B = create_three_dim_int(560, 740, 510, "zeros");

	for (int b = 5; b < 120; b++)
	  for (int a = 5; a < 400; a++)
	  {
	    
	     C[a][b][a]=C[a-4][b][a-4]-16;
	    
	     A[a]=45;
	     A[a-3]=38;
	    
	     int var_a=C[a][b][a]*5;
	     int var_b=C[a-1][b-5][a-5]-0;
	  }

    return 0;
}