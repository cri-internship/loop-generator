#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(920, "random");
	int ***A = create_three_dim_int(850, 610, 390, "random");
	int **C = create_two_dim_int(910, 740, "random");

	for (int c = 2; c < 387; c++)
	  for (int b = 5; b < 606; b++)
	    for (int a = 5; a < 850; a++)
	    {
	      
	      B[a]=A[a][b][c]-C[a][b];
	      C[a][b]=B[a]-A[a][b][c]*C[a][b];
	      
	      C[a][b]=C[a+5][b+2]*17;
	      
	      B[a]=B[a+3]-A[a][b][c]*C[a][b];
	      
	      A[a][b][c]=A[a][b+4][c+3]+24;
	      
	      A[a][b][c]=17;
	      
	      int var_a=A[a][b][c]*29;
	      int var_b=A[a-5][b-4][c-1]+20;
	      
	      A[a][b][c]=A[a][b][c]-B[a]+C[a][b];
	    }

    return 0;
}