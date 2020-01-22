#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(530, "zeros");
	int ***B = create_three_dim_int(660, 260, 910, "zeros");

	for (int d = 2; d < 907; d++)
	  for (int c = 1; c < 257; c++)
	    for (int b = 5; b < 526; b++)
	      for (int a = 5; a < 526; a++)
	      {
	        
	       A[a]=39;
	       float  var_a=A[a]/30;
	        
	       B[a][b][c]=B[a-5][b-1][c-2]-28;
	        
	       A[a]=A[a+4]+0;
	        
	       A[a]=A[a+3]-33;
	        
	       A[a]=B[a][b][c]+A[a];
	       B[a][b][c]=B[a+3][b+2][c+2]-24;
	        
	       int var_b=B[a][b][c]+27;
	       int var_c=B[a+1][b+3][c+3]*6;
	      }

    return 0;
}