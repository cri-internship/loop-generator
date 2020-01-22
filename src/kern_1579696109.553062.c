#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(110, 480, "random");
	float **D = create_two_dim_float(220, 290, "random");
	float ***B = create_three_dim_float(470, 280, 420, "random");
	float ***C = create_three_dim_float(870, 400, 900, "random");

	for (int d = 1; d < 900; d++)
	  for (int c = 3; c < 400; c++)
	    for (int b = 3; b < 105; b++)
	      for (int a = 3; a < 105; a++)
	      {
	        
	       C[a][b][c]=C[a-3][b][c-1]+D[a][b]*B[a][b][c]-A[a][b];
	        
	       C[a][b][c]=C[a-2][b-3][c-1]*0.528;
	        
	       C[a][b][c]=A[a][b]-C[a][b][c]/D[a][b]+B[a][b][c];
	       B[a][b][c]=A[a+5][b]+D[a][b]/C[a][b][c];
	      }

    return 0;
}