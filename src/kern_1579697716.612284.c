#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(640, 250, 170, "ones");
	int ***D = create_three_dim_int(640, 110, 750, "ones");
	int **C = create_two_dim_int(760, 390, "ones");
	int ***B = create_three_dim_int(580, 160, 860, "ones");

	for (int d = 5; d < 170; d++)
	  for (int c = 3; c < 157; c++)
	    for (int b = 3; b < 578; b++)
	      for (int a = 3; a < 578; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-3][c-5]*36;
	        
	       C[a][b]=C[a+3][b+4]+43;
	        
	       B[a][b][c]=13;
	       B[a+2][b+3][c]=2;
	        
	       C[a][b]=D[a][b][c]+A[a][b][c];
	      }

    return 0;
}