#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(810, "ones");
	int *D = create_one_dim_int(840, "ones");
	int **E = create_two_dim_int(440, 970, "ones");
	int ***B = create_three_dim_int(400, 240, 970, "ones");
	int **A = create_two_dim_int(910, 260, "ones");

	for (int d = 4; d < 970; d++)
	  for (int c = 5; c < 240; c++)
	    for (int b = 3; b < 400; b++)
	      for (int a = 3; a < 400; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-5][c-4]/D[a]*C[a];
	        
	       A[a][b]=A[a+3][b+2]-46;
	        
	       C[a]=C[a+4]*26;
	      }

    return 0;
}