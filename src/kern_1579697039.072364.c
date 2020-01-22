#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(690, 600, 690, "random");
	int *A = create_one_dim_int(990, "random");

	for (int d = 5; d < 690; d++)
	  for (int c = 4; c < 600; c++)
	    for (int b = 5; b < 690; b++)
	      for (int a = 5; a < 690; a++)
	      {
	        
	       A[a]=B[a][b][c];
	       A[a]=A[a]*B[a][b][c];
	        
	       A[a]=A[a-1]+B[a][b][c];
	        
	       B[a][b][c]=A[a]/11;
	       A[a]=B[a][b][c];
	        
	       B[a][b][c]=5;
	        
	       B[a][b][c]=A[a]/B[a][b][c];
	       A[a]=A[a-2]+B[a][b][c];
	        
	       int var_a=A[a]*31;
	      }

    return 0;
}