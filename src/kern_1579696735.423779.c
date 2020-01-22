#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(550, 660, 600, "random");
	int **C = create_two_dim_int(700, 980, "random");
	int ***B = create_three_dim_int(440, 130, 690, "random");
	int **D = create_two_dim_int(210, 450, "random");

	for (int d = 2; d < 598; d++)
	  for (int c = 5; c < 130; c++)
	    for (int b = 3; b < 205; b++)
	      for (int a = 3; a < 205; a++)
	      {
	        
	       C[a][b]=29;
	       float  var_a=C[a][b]*4;
	        
	       D[a][b]=D[a][b+4]*13;
	        
	       D[a][b]=D[a+5][b+3]*30;
	        
	       A[a][b][c]=A[a+3][b+2][c+2]/D[a][b]+C[a][b]-43;
	        
	       B[a][b][c]=33;
	       B[a][b-5][c-2]=5;
	        
	       C[a][b]=D[a][b]/A[a][b][c]*B[a][b][c]+A[a][b][c];
	       A[a][b][c]=D[a-3][b]/C[a][b]-A[a][b][c]+B[a][b][c];
	      }

    return 0;
}