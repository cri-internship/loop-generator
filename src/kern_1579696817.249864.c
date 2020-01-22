#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(930, 340, "zeros");
	int ***C = create_three_dim_int(530, 900, 820, "zeros");
	int *A = create_one_dim_int(480, "zeros");

	for (int d = 0; d < 819; d++)
	  for (int c = 3; c < 340; c++)
	    for (int b = 5; b < 480; b++)
	      for (int a = 5; a < 480; a++)
	      {
	        
	       B[a][b]=B[a][b-3]+12;
	        
	       A[a]=A[a-1]/0;
	        
	       C[a][b][c]=28;
	       C[a+2][b+3][c+1]=47;
	        
	       A[a]=3;
	        
	       A[a]=A[a]/41+B[a][b];
	       C[a][b][c]=A[a-4]-C[a][b][c];
	      }

    return 0;
}