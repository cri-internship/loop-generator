#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(890, 590, 70, "zeros");
	int ***B = create_three_dim_int(790, 340, 560, "zeros");
	int *A = create_one_dim_int(550, "zeros");
	int ***D = create_three_dim_int(160, 830, 780, "zeros");

	for (int b = 5; b < 339; b++)
	  for (int a = 4; a < 160; a++)
	  {
	    
	     D[a][b][a]=D[a-4][b-5][a]*23;
	    
	     B[a][b][a]=C[a][b][a];
	     B[a][b+1][a+5]=A[a]/D[a][b][a];
	  }

    return 0;
}