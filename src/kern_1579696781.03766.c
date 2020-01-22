#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(970, 130, 40, "ones");
	int ***A = create_three_dim_int(920, 770, 100, "ones");

	for (int b = 4; b < 129; b++)
	  for (int a = 4; a < 920; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-1][a-4]*29;
	    
	     B[a][b][a]=A[a][b][a];
	    
	     int var_a=A[a][b][a]+35;
	     int var_b=A[a-3][b-4][a-2]/23;
	    
	     B[a][b][a]=B[a][b][a]-A[a][b][a];
	     A[a][b][a]=B[a-3][b-4][a]*A[a][b][a];
	  }

    return 0;
}