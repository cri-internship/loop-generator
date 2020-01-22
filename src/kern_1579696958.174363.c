#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(210, 460, 350, "ones");
	int *A = create_one_dim_int(470, "ones");

	for (int d = 3; d < 346; d++)
	  for (int c = 5; c < 456; c++)
	    for (int b = 5; b < 208; b++)
	      for (int a = 5; a < 208; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-5][c-3]/14;
	        
	       A[a]=A[a+5]+2;
	        
	       B[a][b][c]=B[a+2][b][c+2]-A[a];
	        
	       B[a][b][c]=B[a][b+4][c+4]+A[a];
	        
	       A[a]=A[a+3]*B[a][b][c];
	        
	       int var_a=A[a]*43;
	       int var_b=A[a-5]/42;
	        
	       int var_c=A[a]/50;
	       int var_d=A[a-2]+49;
	      }

    return 0;
}