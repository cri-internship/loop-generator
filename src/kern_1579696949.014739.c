#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(450, 40, 550, "zeros");
	int **C = create_two_dim_int(780, 20, "zeros");
	int *B = create_one_dim_int(280, "zeros");
	int *D = create_one_dim_int(90, "zeros");

	for (int b = 2; b < 16; b++)
	  for (int a = 2; a < 280; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-2][a-2]/C[a][b]-D[a]+B[a];
	    
	     C[a][b]=C[a+1][b+2]/17;
	    
	     C[a][b]=24;
	    
	     B[a]=A[a][b][a];
	     B[a-1]=D[a]*A[a][b][a];
	  }

    return 0;
}