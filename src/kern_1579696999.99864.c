#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(430, 400, "ones");
	int ***C = create_three_dim_int(330, 600, 620, "ones");
	int ***A = create_three_dim_int(160, 870, 980, "ones");
	int ***D = create_three_dim_int(870, 520, 520, "ones");
	int **B = create_two_dim_int(970, 900, "ones");

	for (int b = 5; b < 397; b++)
	  for (int a = 5; a < 160; a++)
	  {
	    
	     D[a][b][a]=D[a-4][b-3][a-2]+18;
	    
	     C[a][b][a]=C[a-3][b][a-3]+16;
	    
	     E[a][b]=E[a-3][b-5]*4;
	    
	     E[a][b]=E[a+2][b+3]/B[a][b];
	    
	     D[a][b][a]=D[a+3][b+4][a+3]*14;
	    
	     A[a][b][a]=7;
	     A[a-5][b][a-4]=1;
	  }

    return 0;
}