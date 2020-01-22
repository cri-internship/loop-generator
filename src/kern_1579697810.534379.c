#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(480, 630, 1000, "ones");
	float ***A = create_three_dim_float(540, 690, 520, "ones");

	for (int d = 5; d < 519; d++)
	  for (int c = 1; c < 630; c++)
	    for (int b = 5; b < 480; b++)
	      for (int a = 5; a < 480; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-1][c-2]+A[a][b][c];
	        
	       B[a][b][c]=B[a-1][b][c-5]+0.035;
	        
	       A[a][b][c]=A[a][b-1][c-1]/0.893;
	        
	       A[a][b][c]=A[a+2][b+2][c]/0.735;
	        
	       float var_a=A[a][b][c]+0.488;
	       float var_b=A[a+3][b+5][c+1]+0.668;
	      }

    return 0;
}