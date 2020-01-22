#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(840, "random");
	int ***B = create_three_dim_int(630, 1000, 910, "random");

	for (int d = 3; d < 910; d++)
	  for (int c = 5; c < 1000; c++)
	    for (int b = 4; b < 630; b++)
	      for (int a = 4; a < 630; a++)
	      {
	        
	       A[a]=A[a-4]-B[a][b][c];
	        
	       A[a]=A[a-2]*26;
	        
	       B[a][b][c]=B[a-1][b-5][c-3]+26;
	        
	       B[a][b][c]=A[a]-B[a][b][c];
	        
	       B[a][b][c]=B[a-4][b-4][c-1]+A[a];
	        
	       A[a]=A[a+2]*B[a][b][c];
	      }

    return 0;
}