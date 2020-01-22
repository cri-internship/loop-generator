#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(730, 730, 260, "random");
	int *A = create_one_dim_int(350, "random");
	int ***C = create_three_dim_int(580, 690, 110, "random");

	for (int d = 2; d < 260; d++)
	  for (int c = 4; c < 730; c++)
	    for (int b = 4; b < 347; b++)
	      for (int a = 4; a < 347; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-4][c-2]+A[a]-14;
	        
	       A[a]=B[a][b][c]-B[a][b][c];
	       A[a+3]=B[a][b][c];
	      }

    return 0;
}