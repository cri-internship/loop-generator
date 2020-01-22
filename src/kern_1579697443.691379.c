#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(410, 200, "ones");
	float ***A = create_three_dim_float(430, 960, 820, "ones");
	float ***B = create_three_dim_float(370, 580, 250, "ones");

	for (int d = 3; d < 247; d++)
	  for (int c = 5; c < 197; c++)
	    for (int b = 5; b < 365; b++)
	      for (int a = 5; a < 365; a++)
	      {
	        
	       B[a][b][c]=B[a+5][b+5][c+3]+0.578;
	        
	       A[a][b][c]=A[a+3][b+1][c]/B[a][b][c];
	        
	       A[a][b][c]=A[a+1][b+2][c+4]/C[a][b];
	        
	       A[a][b][c]=C[a][b]-A[a][b][c];
	       B[a][b][c]=C[a][b+3]*B[a][b][c]+0.2;
	        
	       C[a][b]=A[a][b][c]/C[a][b]+B[a][b][c];
	       C[a][b]=A[a-5][b-5][c]/B[a][b][c]+C[a][b];
	        
	       B[a][b][c]=A[a][b][c]/0.344;
	       A[a][b][c]=A[a-2][b-5][c-3]-B[a][b][c]/C[a][b];
	      }

    return 0;
}