#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(730, "ones");
	int ***C = create_three_dim_int(780, 380, 760, "ones");
	int ***B = create_three_dim_int(400, 550, 370, "ones");

	for (int b = 3; b < 380; b++)
	  for (int a = 4; a < 399; a++)
	  {
	    
	     C[a][b][a]=C[a-4][b-3][a-2]*19;
	    
	     B[a][b][a]=B[a+1][b+2][a]-34;
	    
	     A[a]=A[a+1]-C[a][b][a];
	    
	     A[a]=B[a][b][a]/C[a][b][a];
	    
	     B[a][b][a]=A[a]*C[a][b][a];
	     C[a][b][a]=A[a]/C[a][b][a];
	    
	     A[a]=C[a][b][a]*35;
	  }

    return 0;
}