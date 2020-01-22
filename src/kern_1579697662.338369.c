#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(990, 640, "random");
	int ***E = create_three_dim_int(740, 490, 680, "random");
	int *B = create_one_dim_int(310, "random");
	int *A = create_one_dim_int(650, "random");
	int ***D = create_three_dim_int(130, 590, 770, "random");

	for (int d = 0; d < 768; d++)
	  for (int c = 0; c < 585; c++)
	    for (int b = 4; b < 130; b++)
	      for (int a = 4; a < 130; a++)
	      {
	        
	       A[a]=1;
	       float  var_a=A[a]/18;
	        
	       A[a]=A[a+5]-9;
	        
	       D[a][b][c]=D[a][b+5][c+2]/18;
	        
	       D[a][b][c]=A[a]-E[a][b][c]+C[a][b]*B[a];
	       C[a][b]=A[a-4]/D[a][b][c];
	      }

    return 0;
}