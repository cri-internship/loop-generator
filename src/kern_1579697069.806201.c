#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(70, 660, "zeros");
	int *E = create_one_dim_int(370, "zeros");
	int *C = create_one_dim_int(840, "zeros");
	int ***D = create_three_dim_int(440, 100, 570, "zeros");
	int **A = create_two_dim_int(480, 390, "zeros");

	for (int b = 0; b < 655; b++)
	  for (int a = 0; a < 68; a++)
	  {
	    
	     B[a][b]=B[a+2][b+5]-A[a][b]/E[a];
	  }

    return 0;
}