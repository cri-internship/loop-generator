#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(510, 80, "ones");
	double **D = create_two_dim_double(800, 200, "ones");
	double ***A = create_three_dim_double(350, 650, 100, "ones");
	double ***B = create_three_dim_double(1000, 350, 600, "ones");

	for (int d = 3; d < 100; d++)
	  for (int c = 5; c < 80; c++)
	    for (int b = 4; b < 349; b++)
	      for (int a = 4; a < 349; a++)
	      {
	        
	       D[a][b]=0.539;
	       float  var_a=D[a][b]*0.174;
	        
	       C[a][b]=C[a-4][b-5]/A[a][b][c]+D[a][b];
	        
	       A[a][b][c]=C[a][b]*B[a][b][c]-0.16;
	       A[a+1][b][c]=C[a][b]/D[a][b]*B[a][b][c];
	        
	       A[a][b][c]=A[a][b][c]-C[a][b]/D[a][b];
	       C[a][b]=A[a-2][b][c-3]-D[a][b]/B[a][b][c]+C[a][b];
	      }

    return 0;
}