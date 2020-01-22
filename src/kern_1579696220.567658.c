#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(410, "random");
	int ***B = create_three_dim_int(920, 370, 60, "random");
	int *A = create_one_dim_int(260, "random");
	int *D = create_one_dim_int(950, "random");

	for (int d = 4; d < 57; d++)
	  for (int c = 4; c < 365; c++)
	    for (int b = 5; b < 410; b++)
	      for (int a = 5; a < 410; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-4][c]/46;
	        
	       B[a][b][c]=B[a-3][b-1][c-4]*14-C[a];
	        
	       D[a]=D[a-5]*A[a]/B[a][b][c];
	        
	       B[a][b][c]=B[a+1][b+5][c+3]*C[a]/21;
	        
	       C[a]=A[a];
	       C[a]=B[a][b][c]-A[a]+D[a];
	        
	       int var_a=D[a]/37;
	       int var_b=D[a+3]+7;
	      }

    return 0;
}