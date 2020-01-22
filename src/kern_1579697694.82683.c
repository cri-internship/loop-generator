#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(990, 80, 230, "zeros");
	double ***D = create_three_dim_double(850, 920, 350, "zeros");
	double ***C = create_three_dim_double(260, 580, 770, "zeros");
	double ***B = create_three_dim_double(90, 950, 810, "zeros");

	for (int d = 5; d < 225; d++)
	  for (int c = 3; c < 80; c++)
	    for (int b = 3; b < 90; b++)
	      for (int a = 3; a < 90; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-3][c-5]*B[a][b][c]/D[a][b][c];
	        
	       C[a][b][c]=C[a-2][b-1][c-3]+A[a][b][c]/A[a][b][c];
	        
	       A[a][b][c]=A[a+1][b][c+5]/0.292;
	        
	       D[a][b][c]=D[a+2][b+1][c+4]-0.237;
	        
	       C[a][b][c]=C[a][b+3][c+2]/B[a][b][c];
	        
	       C[a][b][c]=B[a][b][c]+0.883;
	       B[a][b][c]=B[a][b+4][c+3]-C[a][b][c];
	        
	       A[a][b][c]=C[a][b][c]-0.192*B[a][b][c];
	       D[a][b][c]=C[a+4][b+3][c+4]/B[a][b][c]*D[a][b][c];
	      }

    return 0;
}