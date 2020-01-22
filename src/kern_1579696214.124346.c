#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(20, 870, "random");
	int *D = create_one_dim_int(370, "random");
	int *A = create_one_dim_int(170, "random");
	int ***B = create_three_dim_int(700, 710, 570, "random");

	for (int d = 1; d < 570; d++)
	  for (int c = 1; c < 710; c++)
	    for (int b = 2; b < 20; b++)
	      for (int a = 2; a < 20; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b][c-1]-C[a][b]*D[a]/A[a];
	        
	       D[a]=B[a][b][c]*B[a][b][c];
	       D[a+5]=C[a][b]+9;
	        
	       C[a][b]=25;
	       C[a][b+1]=34;
	        
	       int var_a=C[a][b]*12;
	       int var_b=C[a][b-1]*28;
	        
	       int var_c=D[a]+22;
	       int var_d=D[a+5]+12;
	      }

    return 0;
}