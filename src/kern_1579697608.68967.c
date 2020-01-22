#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(240, 770, 950, "random");
	int ***A = create_three_dim_int(430, 530, 950, "random");

	for (int d = 3; d < 946; d++)
	  for (int c = 5; c < 526; c++)
	    for (int b = 2; b < 239; b++)
	      for (int a = 2; a < 239; a++)
	      {
	        
	       A[a][b][c]=A[a][b-1][c]+27;
	        
	       B[a][b][c]=B[a-2][b-5][c-3]*39;
	        
	       B[a][b][c]=B[a+1][b+1][c+3]/28;
	        
	       A[a][b][c]=A[a][b][c]-12;
	       B[a][b][c]=A[a+3][b+4][c+4]+39;
	      }

    return 0;
}