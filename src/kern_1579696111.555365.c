#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(240, 1000, 820, "zeros");
	int **A = create_two_dim_int(970, 60, "zeros");
	int **B = create_two_dim_int(410, 700, "zeros");

	for (int b = 5; b < 60; b++)
	  for (int a = 2; a < 235; a++)
	  {
	    
	     A[a][b]=A[a][b-4]-50;
	    
	     C[a][b][a]=C[a][b][a]/34-B[a][b];
	     C[a][b][a]=B[a][b]*A[a][b];
	    
	     B[a][b]=4;
	     B[a-2][b-5]=47;
	    
	     int var_a=C[a][b][a]-16;
	     int var_b=C[a+5][b+3][a]+4;
	  }

    return 0;
}