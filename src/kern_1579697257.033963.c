#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(320, 110, "zeros");
	int ***D = create_three_dim_int(480, 970, 950, "zeros");
	int *A = create_one_dim_int(40, "zeros");
	int *C = create_one_dim_int(240, "zeros");
	int ***B = create_three_dim_int(870, 240, 240, "zeros");

	for (int b = 0; b < 108; b++)
	  for (int a = 2; a < 240; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b][a-1]-44;
	    
	     E[a][b]=49;
	     E[a+4][b+2]=10;
	    
	     A[a]=C[a]+A[a]*5-B[a][b][a];
	     D[a][b][a]=C[a]/E[a][b]*A[a]-B[a][b][a]+D[a][b][a];
	  }

    return 0;
}