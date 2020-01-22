#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(620, 620, 490, "random");
	double ***C = create_three_dim_double(220, 910, 140, "random");
	double **B = create_two_dim_double(820, 570, "random");
	double **D = create_two_dim_double(530, 390, "random");

	for (int d = 3; d < 388; d++)
	  for (int c = 3; c < 529; c++)
	    for (int b = 3; b < 529; b++)
	      for (int a = 3; a < 529; a++)
	      {
	        
	       D[a][b]=D[a-3][b-1]*0.616;
	        
	       D[a][b]=D[a-1][b-3]+0.262;
	        
	       B[a][b]=B[a][b]-0.287/D[a][b];
	       C[a][b][c]=B[a+4][b]/D[a][b];
	        
	       D[a][b]=D[a][b]+B[a][b];
	       A[a][b][c]=D[a+1][b+2]+C[a][b][c]/B[a][b]*A[a][b][c];
	      }

    return 0;
}