#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(120, "ones");
	double ***A = create_three_dim_double(290, 630, 370, "ones");

	for (int d = 4; d < 370; d++)
	  for (int c = 2; c < 630; c++)
	    for (int b = 4; b < 118; b++)
	      for (int a = 4; a < 118; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-2][c]*0.062;
	        
	       B[a]=0.867;
	       B[a+1]=0.909;
	        
	       A[a][b][c]=0.25;
	        
	       A[a][b][c]=B[a]*0.887;
	       B[a]=B[a-4]*A[a][b][c];
	        
	       A[a][b][c]=B[a]-A[a][b][c];
	       B[a]=B[a+2]*A[a][b][c];
	      }

    return 0;
}