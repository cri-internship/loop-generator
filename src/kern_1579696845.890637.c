#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(920, 790, 900, "random");
	int ***A = create_three_dim_int(420, 440, 630, "random");

	for (int d = 2; d < 626; d++)
	  for (int c = 5; c < 436; c++)
	    for (int b = 2; b < 415; b++)
	      for (int a = 2; a < 415; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-5][c-2]*A[a][b][c];
	        
	       B[a][b][c]=B[a+3][b+2][c+1]-19;
	        
	       A[a][b][c]=A[a+5][b+3][c+2]+B[a][b][c];
	        
	       int var_a=A[a][b][c]+18;
	       int var_b=A[a+4][b+4][c+4]+25;
	        
	       int var_c=B[a][b][c]*32;
	       int var_d=B[a+5][b+4][c+2]*34;
	      }

    return 0;
}