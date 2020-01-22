#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(790, "random");
	int ***B = create_three_dim_int(380, 520, 170, "random");
	int *A = create_one_dim_int(40, "random");
	int **D = create_two_dim_int(250, 600, "random");
	int **E = create_two_dim_int(570, 60, "random");

	for (int d = 3; d < 60; d++)
	  for (int c = 4; c < 40; c++)
	    for (int b = 4; b < 40; b++)
	      for (int a = 4; a < 40; a++)
	      {
	        
	       E[a][b]=E[a-1][b-3]/B[a][b][c]-D[a][b]+A[a]*C[a];
	        
	       C[a]=C[a+5]-E[a][b]*D[a][b]/B[a][b][c]+42;
	        
	       int var_a=A[a]*16;
	       A[a]=50;
	        
	       C[a]=37;
	        
	       E[a][b]=A[a]*C[a]/D[a][b]-B[a][b][c]+E[a][b];
	       A[a]=A[a-4]*C[a]+D[a][b]/E[a][b]-B[a][b][c];
	      }

    return 0;
}