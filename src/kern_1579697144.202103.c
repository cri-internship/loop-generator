#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(30, 60, 370, "ones");
	double ***D = create_three_dim_double(240, 450, 330, "ones");
	double ***A = create_three_dim_double(380, 110, 100, "ones");
	double ***B = create_three_dim_double(510, 590, 890, "ones");

	for (int d = 3; d < 98; d++)
	  for (int c = 3; c < 56; c++)
	    for (int b = 4; b < 26; b++)
	      for (int a = 4; a < 26; a++)
	      {
	        
	       A[a][b][c]=A[a+3][b+4][c+2]*0.318;
	        
	       C[a][b][c]=B[a][b][c]+A[a][b][c];
	       C[a+1][b+4][c+5]=D[a][b][c]/A[a][b][c];
	        
	       D[a][b][c]=0.064;
	       D[a-2][b][c-2]=0.284;
	        
	       C[a][b][c]=A[a][b][c]-C[a][b][c]+C[a][b][c];
	       B[a][b][c]=A[a-4][b-3][c-3]-0.831;
	        
	       double var_a=D[a][b][c]-0.829;
	       double var_b=D[a-1][b][c-3]/0.116;
	        
	       D[a][b][c]=C[a][b][c]+D[a][b][c]-B[a][b][c];
	       A[a][b][c]=C[a+4][b][c+1]*B[a][b][c]-D[a][b][c];
	      }

    return 0;
}