#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(330, 250, "zeros");
	int **A = create_two_dim_int(120, 550, "zeros");
	int **D = create_two_dim_int(90, 160, "zeros");
	int *B = create_one_dim_int(470, "zeros");

	for (int b = 4; b < 250; b++)
	  for (int a = 1; a < 120; a++)
	  {
	    
	     A[a][b]=50;
	     A[a][b-3]=6;
	    
	     C[a][b]=D[a][b];
	     C[a][b-3]=A[a][b]*B[a];
	    
	     B[a]=19*D[a][b]-A[a][b];
	     B[a+2]=A[a][b]/3;
	    
	     B[a]=8;
	    
	     A[a][b]=0;
	    
	     B[a]=C[a][b]*D[a][b]/A[a][b]-B[a];
	     D[a][b]=C[a-1][b-4]-1+A[a][b]*B[a];
	  }

    return 0;
}