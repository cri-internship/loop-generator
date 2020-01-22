#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(970, 10, 980, "random");
	int *A = create_one_dim_int(570, "random");

	for (int d = 0; d < 976; d++)
	  for (int c = 1; c < 6; c++)
	    for (int b = 5; b < 568; b++)
	      for (int a = 5; a < 568; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-1][c]/A[a];
	        
	       A[a]=A[a+2]-B[a][b][c];
	        
	       B[a][b][c]=B[a][b][c+3]*2;
	        
	       int var_a=B[a][b][c]/4;
	       int var_b=B[a+3][b][c+4]+1;
	        
	       A[a]=A[a]/B[a][b][c];
	       B[a][b][c]=A[a-4]*B[a][b][c];
	        
	       int var_c=A[a]/20;
	       int var_d=A[a-5]-41;
	      }

    return 0;
}