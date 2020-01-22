#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(140, 10, 770, "zeros");
	int **E = create_two_dim_int(340, 480, "zeros");
	int ***C = create_three_dim_int(260, 770, 540, "zeros");
	int *D = create_one_dim_int(800, "zeros");
	int **A = create_two_dim_int(620, 110, "zeros");

	for (int b = 3; b < 107; b++)
	  for (int a = 4; a < 260; a++)
	  {
	    
	     C[a][b][a]=C[a-1][b-3][a-3]-0;
	    
	     E[a][b]=E[a-2][b-2]*18;
	    
	     E[a][b]=7;
	    
	     A[a][b]=1;
	     A[a+2][b+3]=41;
	  }

    return 0;
}