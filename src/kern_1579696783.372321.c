#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(380, 460, "zeros");
	int ***A = create_three_dim_int(250, 500, 770, "zeros");
	int ***B = create_three_dim_int(230, 350, 910, "zeros");

	for (int b = 0; b < 460; b++)
	  for (int a = 5; a < 248; a++)
	  {
	    
	     C[a][b]=C[a-5][b]/B[a][b][a];
	    
	     B[a][b][a]=A[a][b][a]/42-B[a][b][a];
	     A[a][b][a]=A[a+2][b][a+2]+C[a][b]*B[a][b][a];
	  }

    return 0;
}