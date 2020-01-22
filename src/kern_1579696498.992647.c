#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(660, 890, 530, "random");
	int ***D = create_three_dim_int(610, 270, 690, "random");
	int ***B = create_three_dim_int(810, 130, 830, "random");
	int **A = create_two_dim_int(80, 240, "random");

	for (int c = 4; c < 529; c++)
	  for (int b = 4; b < 129; b++)
	    for (int a = 2; a < 610; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b-4][c]-D[a][b][c]+A[a][b]*C[a][b][c];
	      
	      B[a][b][c]=C[a][b][c];
	      
	      C[a][b][c]=11;
	      C[a+4][b+4][c+1]=42;
	      
	      B[a][b][c]=B[a][b][c]+C[a][b][c]*D[a][b][c]-A[a][b];
	      C[a][b][c]=B[a-2][b-2][c-2]-D[a][b][c]+4;
	      
	      int var_a=D[a][b][c]-31;
	      int var_b=D[a][b-3][c-4]/3;
	      
	      int var_c=B[a][b][c]-18;
	      int var_d=B[a][b-3][c-3]+8;
	    }

    return 0;
}