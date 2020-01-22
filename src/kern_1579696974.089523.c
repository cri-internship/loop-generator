#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(400, 820, 430, "ones");
	double ***C = create_three_dim_double(400, 550, 770, "ones");
	double ***B = create_three_dim_double(100, 140, 610, "ones");

	for (int d = 4; d < 607; d++)
	  for (int c = 2; c < 139; c++)
	    for (int b = 3; b < 99; b++)
	      for (int a = 3; a < 99; a++)
	      {
	        
	       B[a][b][c]=B[a+1][b+1][c+3]+0.587;
	        
	       A[a][b][c]=C[a][b][c]-A[a][b][c]+B[a][b][c];
	       C[a][b][c]=C[a-3][b-2][c-4]*A[a][b][c];
	        
	       double var_a=C[a][b][c]+0.933;
	       double var_b=C[a+3][b+1][c+4]/0.045;
	      }

    return 0;
}