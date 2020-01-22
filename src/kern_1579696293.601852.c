#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(870, 830, "random");
	int ***E = create_three_dim_int(460, 890, 710, "random");
	int **C = create_two_dim_int(390, 530, "random");
	int ***A = create_three_dim_int(600, 610, 630, "random");
	int **D = create_two_dim_int(180, 740, "random");

	for (int d = 4; d < 625; d++)
	  for (int c = 5; c < 527; c++)
	    for (int b = 4; b < 175; b++)
	      for (int a = 4; a < 175; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-4][c-4]+B[a][b]*D[a][b];
	        
	       D[a][b]=D[a+5][b+5]*A[a][b][c];
	        
	       C[a][b]=E[a][b][c]*E[a][b][c]+B[a][b];
	       C[a+1][b+3]=2/B[a][b];
	        
	       B[a][b]=16;
	       B[a-3][b-3]=14;
	        
	       int var_a=D[a][b]-10;
	       int var_b=D[a-3][b-5]-35;
	        
	       int var_c=A[a][b][c]/24;
	       int var_d=A[a+1][b+3][c+5]*44;
	      }

    return 0;
}