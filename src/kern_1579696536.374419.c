#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(900, 640, 370, "random");
	int **D = create_two_dim_int(280, 900, "random");
	int *A = create_one_dim_int(160, "random");
	int ***B = create_three_dim_int(930, 500, 350, "random");

	for (int d = 0; d < 346; d++)
	  for (int c = 0; c < 499; c++)
	    for (int b = 3; b < 160; b++)
	      for (int a = 3; a < 160; a++)
	      {
	        
	       C[a][b][c]=C[a][b+2][c+2]*B[a][b][c]+A[a]/29;
	        
	       A[a]=C[a][b][c]-C[a][b][c]+D[a][b];
	       A[a]=B[a][b][c];
	        
	       int var_a=C[a][b][c]*10;
	       int var_b=C[a+2][b+2][c]+48;
	        
	       int var_c=D[a][b]+6;
	       int var_d=D[a-3][b]*14;
	        
	       C[a][b][c]=B[a][b][c]/A[a];
	       B[a][b][c]=B[a+1][b+1][c+4]/A[a]+C[a][b][c]-D[a][b];
	      }

    return 0;
}