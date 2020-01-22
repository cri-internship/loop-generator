#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(380, 590, 630, "ones");
	int **B = create_two_dim_int(570, 480, "ones");

	for (int d = 4; d < 626; d++)
	  for (int c = 4; c < 476; c++)
	    for (int b = 1; b < 375; b++)
	      for (int a = 1; a < 375; a++)
	      {
	        
	       B[a][b]=B[a+5][b+4]*35;
	        
	       B[a][b]=B[a+2][b+3]+47;
	        
	       A[a][b][c]=8;
	       A[a+5][b+5][c+4]=42;
	        
	       A[a][b][c]=B[a][b];
	        
	       int var_a=B[a][b]+30;
	       int var_b=B[a+5][b+3]+47;
	        
	       int var_c=B[a][b]/6;
	       int var_d=B[a][b-4]-33;
	        
	       int var_e=A[a][b][c]+13;
	       int var_f=A[a-1][b-4][c-4]/35;
	      }

    return 0;
}