#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(560, 840, "zeros");
	int *C = create_one_dim_int(490, "zeros");
	int ***A = create_three_dim_int(700, 190, 850, "zeros");

	for (int b = 0; b < 187; b++)
	  for (int a = 2; a < 490; a++)
	  {
	    
	     C[a]=C[a-2]+11;
	    
	     A[a][b][a]=B[a][b];
	     A[a+4][b+3][a+2]=C[a]*B[a][b];
	  }

    return 0;
}