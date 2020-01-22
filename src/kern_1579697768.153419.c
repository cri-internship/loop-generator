#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(910, 450, 900, "random");
	int **B = create_two_dim_int(900, 820, "random");
	int **C = create_two_dim_int(870, 170, "random");

	for (int d = 3; d < 900; d++)
	  for (int c = 5; c < 450; c++)
	    for (int b = 3; b < 910; b++)
	      for (int a = 3; a < 910; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-2][c-3]/B[a][b];
	        
	       A[a][b][c]=C[a][b]-C[a][b];
	        
	       A[a][b][c]=A[a][b][c]-B[a][b]+C[a][b];
	       B[a][b]=A[a-3][b-3][c]*12;
	      }

    return 0;
}