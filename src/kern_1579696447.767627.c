#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(60, "random");
	int **D = create_two_dim_int(530, 680, "random");
	int ***A = create_three_dim_int(470, 870, 990, "random");
	int *B = create_one_dim_int(400, "random");

	for (int d = 0; d < 985; d++)
	  for (int c = 5; c < 680; c++)
	    for (int b = 5; b < 58; b++)
	      for (int a = 5; a < 58; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-5][c]+23;
	        
	       C[a]=C[a+2]*D[a][b];
	        
	       A[a][b][c]=A[a+2][b+2][c+1]/0;
	        
	       D[a][b]=32;
	       D[a-3][b-4]=44;
	      }

    return 0;
}