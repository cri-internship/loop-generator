#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(150, 120, 680, "ones");
	int **B = create_two_dim_int(90, 820, "ones");
	int ***A = create_three_dim_int(790, 680, 300, "ones");

	for (int b = 2; b < 120; b++)
	  for (int a = 5; a < 90; a++)
	  {
	    
	     B[a][b]=B[a-2][b-1]+C[a][b][a];
	    
	     C[a][b][a]=A[a][b][a]*B[a][b];
	     C[a-1][b-2][a-5]=B[a][b];
	    
	     int var_a=A[a][b][a]/4;
	     int var_b=A[a][b-2][a]-0;
	  }

    return 0;
}