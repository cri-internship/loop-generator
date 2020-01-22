#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(480, "ones");
	int ***C = create_three_dim_int(220, 230, 850, "ones");
	int ***A = create_three_dim_int(400, 730, 740, "ones");

	for (int b = 3; b < 230; b++)
	  for (int a = 4; a < 220; a++)
	  {
	    
	     C[a][b][a]=C[a-3][b-1][a]-13;
	    
	     A[a][b][a]=A[a+3][b+3][a]+23;
	    
	     B[a]=A[a][b][a];
	     B[a+4]=C[a][b][a];
	    
	     C[a][b][a]=1;
	  }

    return 0;
}