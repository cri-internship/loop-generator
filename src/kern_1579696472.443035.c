#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(760, "ones");
	int *D = create_one_dim_int(360, "ones");
	int ***C = create_three_dim_int(40, 400, 480, "ones");
	int *A = create_one_dim_int(950, "ones");
	int **B = create_two_dim_int(690, 440, "ones");

	for (int d = 3; d < 480; d++)
	  for (int c = 5; c < 400; c++)
	    for (int b = 5; b < 40; b++)
	      for (int a = 5; a < 40; a++)
	      {
	        
	       A[a]=A[a-2]/C[a][b][c]-16*D[a]+E[a];
	        
	       E[a]=E[a-5]+A[a];
	        
	       float  var_a=E[a]-17;
	        
	       A[a]=A[a]-13;
	       E[a]=A[a]-B[a][b]/D[a];
	        
	       B[a][b]=C[a][b][c]/B[a][b]+D[a];
	       C[a][b][c]=C[a-5][b-5][c-3]+29;
	        
	       int var_b=B[a][b]-14;
	       int var_c=B[a+2][b+2]+35;
	      }

    return 0;
}