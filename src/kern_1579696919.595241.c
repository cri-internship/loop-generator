#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(390, "ones");
	int **A = create_two_dim_int(440, 40, "ones");
	int *C = create_one_dim_int(980, "ones");
	int ***B = create_three_dim_int(270, 800, 650, "ones");

	for (int d = 0; d < 647; d++)
	  for (int c = 0; c < 35; c++)
	    for (int b = 0; b < 267; b++)
	      for (int a = 0; a < 267; a++)
	      {
	        
	       int var_a=D[a]-21;
	       D[a]=8;
	        
	       C[a]=C[a+1]*B[a][b][c]-D[a];
	        
	       A[a][b]=C[a]/B[a][b][c]-7;
	       A[a+5][b+5]=C[a]+D[a];
	        
	       C[a]=A[a][b]+B[a][b][c];
	        
	       int var_b=B[a][b][c]-42;
	       int var_c=B[a+3][b+2][c+3]/5;
	        
	       C[a]=A[a][b]*B[a][b][c]/C[a];
	       B[a][b][c]=A[a+2][b+3]*B[a][b][c];
	      }

    return 0;
}