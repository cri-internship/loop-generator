#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(390, 390, 450, "random");
	int ***A = create_three_dim_int(230, 510, 760, "random");

	for (int d = 5; d < 450; d++)
	  for (int c = 5; c < 390; c++)
	    for (int b = 3; b < 229; b++)
	      for (int a = 3; a < 229; a++)
	      {
	        
	       A[a][b][c]=A[a+1][b+3][c]/22;
	        
	       B[a][b][c]=43;
	       B[a-1][b-3][c-5]=26;
	        
	       int var_a=A[a][b][c]/6;
	       int var_b=A[a][b-5][c]+38;
	        
	       A[a][b][c]=A[a][b][c]*16;
	       B[a][b][c]=A[a-3][b][c-3]-B[a][b][c];
	      }

    return 0;
}