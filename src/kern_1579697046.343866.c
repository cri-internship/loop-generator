#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(840, 390, 90, "zeros");
	int **B = create_two_dim_int(50, 690, "zeros");
	int *A = create_one_dim_int(960, "zeros");

	for (int d = 0; d < 88; d++)
	  for (int c = 0; c < 389; c++)
	    for (int b = 0; b < 837; b++)
	      for (int a = 0; a < 837; a++)
	      {
	        
	       A[a]=A[a+1]-B[a][b];
	        
	       C[a][b][c]=C[a+3][b+1][c+2]-A[a]/B[a][b];
	        
	       B[a][b]=C[a][b][c]*A[a]-B[a][b];
	       C[a][b][c]=C[a+1][b][c+1]+B[a][b];
	      }

    return 0;
}