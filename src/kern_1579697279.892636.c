#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(920, 380, 470, "zeros");
	int ***A = create_three_dim_int(810, 50, 890, "zeros");
	int *C = create_one_dim_int(290, "zeros");
	int **B = create_two_dim_int(360, 490, "zeros");

	for (int b = 0; b < 375; b++)
	  for (int a = 3; a < 290; a++)
	  {
	    
	     C[a]=15;
	     C[a-3]=30;
	    
	     D[a][b][a]=21;
	     D[a][b+5][a+1]=13;
	    
	     int var_a=D[a][b][a]/20;
	     int var_b=D[a+5][b+2][a+1]+50;
	  }

    return 0;
}