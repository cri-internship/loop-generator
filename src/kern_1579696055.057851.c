#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(280, 200, 200, "zeros");
	int *B = create_one_dim_int(480, "zeros");
	int **C = create_two_dim_int(360, 140, "zeros");
	int *A = create_one_dim_int(80, "zeros");

	for (int b = 0; b < 200; b++)
	  for (int a = 3; a < 80; a++)
	  {
	    
	     D[a][b][a]=D[a-3][b][a-2]/B[a]*A[a]+C[a][b];
	    
	     B[a]=D[a][b][a];
	     B[a-2]=A[a]+D[a][b][a];
	    
	     int var_a=A[a]-16;
	     int var_b=A[a-1]+36;
	  }

    return 0;
}