#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(330, "ones");
	double ***B = create_three_dim_double(370, 950, 980, "ones");

	for (int d = 5; d < 975; d++)
	  for (int c = 4; c < 949; c++)
	    for (int b = 5; b < 330; b++)
	      for (int a = 5; a < 330; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-4][c-5]-0.347;
	        
	       A[a]=0.456;
	       float  var_a=A[a]/0.698;
	        
	       B[a][b][c]=B[a-5][b-1][c-2]+0.191;
	        
	       A[a]=A[a]+B[a][b][c];
	       B[a][b][c]=A[a-1]+0.064;
	      }

    return 0;
}