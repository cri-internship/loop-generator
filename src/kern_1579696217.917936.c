#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(830, 950, 800, "zeros");
	int **C = create_two_dim_int(30, 310, "zeros");
	int **A = create_two_dim_int(810, 660, "zeros");
	int **D = create_two_dim_int(290, 990, "zeros");
	int ***B = create_three_dim_int(630, 950, 290, "zeros");

	for (int d = 0; d < 797; d++)
	  for (int c = 5; c < 657; c++)
	    for (int b = 2; b < 285; b++)
	      for (int a = 2; a < 285; a++)
	      {
	        
	       A[a][b]=A[a][b-5]/12;
	        
	       D[a][b]=D[a+5][b+2]+37;
	        
	       E[a][b][c]=A[a][b]/D[a][b]-B[a][b][c];
	       E[a+2][b+4][c+3]=C[a][b]*19/B[a][b][c]-A[a][b];
	        
	       D[a][b]=16;
	        
	       int var_a=E[a][b][c]+35;
	       int var_b=E[a+5][b+5][c+3]/21;
	        
	       int var_c=A[a][b]/23;
	       int var_d=A[a+4][b+3]-26;
	      }

    return 0;
}