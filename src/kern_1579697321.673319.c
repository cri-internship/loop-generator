#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(410, "random");
	int ***A = create_three_dim_int(850, 540, 260, "random");
	int **B = create_two_dim_int(290, 510, "random");

	for (int d = 1; d < 260; d++)
	  for (int c = 2; c < 540; c++)
	    for (int b = 5; b < 410; b++)
	      for (int a = 5; a < 410; a++)
	      {
	        
	       C[a]=C[a-2]*29;
	        
	       C[a]=A[a][b][c]/11;
	        
	       A[a][b][c]=46+B[a][b];
	       A[a-2][b-1][c-1]=C[a]-B[a][b];
	        
	       A[a][b][c]=19;
	      }

    return 0;
}