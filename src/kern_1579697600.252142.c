#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(890, 360, "zeros");
	int **A = create_two_dim_int(750, 320, "zeros");
	int *C = create_one_dim_int(210, "zeros");

	for (int c = 0; c < 359; c++)
	  for (int b = 0; b < 209; b++)
	    for (int a = 0; a < 209; a++)
	    {
	      
	      C[a]=A[a][b]-B[a][b];
	      A[a][b]=C[a]-A[a][b]*B[a][b];
	      
	      C[a]=C[a+1]/A[a][b];
	      
	      B[a][b]=6;
	      B[a][b+1]=1;
	    }

    return 0;
}