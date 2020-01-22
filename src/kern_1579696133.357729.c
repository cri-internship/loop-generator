#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(400, "zeros");
	int **C = create_two_dim_int(700, 40, "zeros");
	int *A = create_one_dim_int(800, "zeros");
	int ***D = create_three_dim_int(30, 80, 490, "zeros");

	for (int b = 0; b < 38; b++)
	  for (int a = 0; a < 25; a++)
	  {
	    
	     C[a][b]=C[a+5][b+1]*15;
	    
	     D[a][b][a]=D[a+4][b+3][a+5]*A[a]+6;
	    
	     D[a][b][a]=50;
	    
	     C[a][b]=B[a]+D[a][b][a]*A[a];
	  }

    return 0;
}