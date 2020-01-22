#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(560, 520, "zeros");
	int **A = create_two_dim_int(470, 240, "zeros");
	int ***B = create_three_dim_int(290, 50, 800, "zeros");
	int ***E = create_three_dim_int(440, 560, 650, "zeros");
	int *C = create_one_dim_int(500, "zeros");

	for (int b = 0; b < 236; b++)
	  for (int a = 0; a < 469; a++)
	  {
	    
	     A[a][b]=A[a+1][b+4]*50;
	    
	     C[a]=C[a+2]+D[a][b]*A[a][b]/E[a][b][a]-B[a][b][a];
	    
	     C[a]=41;
	  }

    return 0;
}