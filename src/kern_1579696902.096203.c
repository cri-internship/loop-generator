#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(730, 650, "random");
	int **D = create_two_dim_int(980, 340, "random");
	int ***B = create_three_dim_int(390, 520, 670, "random");
	int **C = create_two_dim_int(290, 430, "random");
	int ***E = create_three_dim_int(80, 460, 910, "random");

	for (int d = 4; d < 906; d++)
	  for (int c = 3; c < 336; c++)
	    for (int b = 3; b < 77; b++)
	      for (int a = 3; a < 77; a++)
	      {
	        
	       A[a][b]=A[a-3][b-3]-49;
	        
	       D[a][b]=D[a][b+4]/23;
	        
	       E[a][b][c]=E[a+3][b+5][c+1]+35;
	        
	       E[a][b][c]=C[a][b]*A[a][b]/7+B[a][b][c];
	        
	       int var_a=A[a][b]+5;
	       int var_b=A[a+1][b+2]+40;
	        
	       E[a][b][c]=D[a][b]/E[a][b][c]*A[a][b]-B[a][b][c]+E[a][b][c];
	       A[a][b]=D[a+2][b+2]/B[a][b][c]-C[a][b]+A[a][b];
	      }

    return 0;
}