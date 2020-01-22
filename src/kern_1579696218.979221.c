#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(30, 910, 630, "zeros");
	int ***A = create_three_dim_int(860, 140, 790, "zeros");

	for (int d = 5; d < 626; d++)
	  for (int c = 2; c < 136; c++)
	    for (int b = 5; b < 25; b++)
	      for (int a = 5; a < 25; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-2][c]/37;
	        
	       B[a][b][c]=B[a+2][b+4][c+4]+A[a][b][c];
	        
	       A[a][b][c]=A[a+3][b+4][c+2]+50;
	        
	       A[a][b][c]=6;
	        
	       int var_a=B[a][b][c]+21;
	       int var_b=B[a+1][b+3][c+1]/48;
	        
	       int var_c=B[a][b][c]*36;
	       int var_d=B[a+5][b+5][c]/25;
	      }

    return 0;
}