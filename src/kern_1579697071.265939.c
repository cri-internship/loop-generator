#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(560, 180, "zeros");
	int **A = create_two_dim_int(310, 610, "zeros");
	int *D = create_one_dim_int(710, "zeros");
	int **E = create_two_dim_int(330, 850, "zeros");
	int **C = create_two_dim_int(510, 410, "zeros");

	for (int d = 1; d < 179; d++)
	  for (int c = 5; c < 326; c++)
	    for (int b = 5; b < 326; b++)
	      for (int a = 5; a < 326; a++)
	      {
	        
	       E[a][b]=E[a-4][b-1]/B[a][b]*C[a][b]-A[a][b];
	        
	       E[a][b]=E[a+4][b+2]*D[a]/B[a][b];
	        
	       B[a][b]=B[a+3][b+1]-E[a][b]*E[a][b]+D[a]/C[a][b];
	        
	       C[a][b]=E[a][b]+B[a][b]*D[a]/C[a][b]-A[a][b];
	       B[a][b]=E[a+4][b+1]-26/C[a][b];
	        
	       int var_a=D[a]-8;
	       int var_b=D[a-5]-38;
	      }

    return 0;
}