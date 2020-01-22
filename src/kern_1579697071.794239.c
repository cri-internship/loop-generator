#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(400, 20, "zeros");
	int ***A = create_three_dim_int(670, 940, 640, "zeros");
	int *B = create_one_dim_int(280, "zeros");

	for (int d = 4; d < 638; d++)
	  for (int c = 4; c < 20; c++)
	    for (int b = 5; b < 280; b++)
	      for (int a = 5; a < 280; a++)
	      {
	        
	       C[a][b]=C[a][b-4]/33;
	        
	       A[a][b][c]=A[a-4][b-1][c-4]+C[a][b];
	        
	       A[a][b][c]=A[a+4][b+4][c+2]*B[a]-C[a][b];
	        
	       B[a]=A[a][b][c]/C[a][b];
	       B[a-5]=A[a][b][c];
	      }

    return 0;
}