#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(680, 600, 320, "random");
	int ***B = create_three_dim_int(430, 870, 380, "random");
	int **A = create_two_dim_int(770, 640, "random");
	int **C = create_two_dim_int(620, 230, "random");

	for (int d = 5; d < 319; d++)
	  for (int c = 4; c < 230; c++)
	    for (int b = 3; b < 430; b++)
	      for (int a = 3; a < 430; a++)
	      {
	        
	       B[a][b][c]=B[a][b-4][c-4]*28;
	        
	       D[a][b][c]=D[a-3][b-2][c-5]*6;
	        
	       B[a][b][c]=C[a][b]/8+B[a][b][c]*A[a][b];
	       D[a][b][c]=C[a-3][b-4]-A[a][b];
	        
	       C[a][b]=C[a][b]*A[a][b]+D[a][b][c]/B[a][b][c];
	        
	       int var_a=D[a][b][c]*18;
	       int var_b=D[a+4][b+3][c+1]-41;
	        
	       B[a][b][c]=A[a][b]-C[a][b]+D[a][b][c]/C[a][b];
	       B[a][b][c]=A[a][b-2]/D[a][b][c]*B[a][b][c]-C[a][b];
	      }

    return 0;
}