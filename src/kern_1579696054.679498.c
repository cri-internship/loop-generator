#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(50, 50, 720, "zeros");
	int ***B = create_three_dim_int(280, 140, 460, "zeros");
	int ***D = create_three_dim_int(430, 10, 820, "zeros");
	int ***A = create_three_dim_int(900, 150, 600, "zeros");

	for (int c = 5; c < 456; c++)
	  for (int b = 3; b < 10; b++)
	    for (int a = 1; a < 46; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b][c-5]-C[a][b][c]+A[a][b][c];
	      
	      D[a][b][c]=D[a][b][c-2]+B[a][b][c]-B[a][b][c];
	      
	      B[a][b][c]=B[a+4][b+5][c+2]-D[a][b][c];
	      
	      B[a][b][c]=B[a+3][b+1][c+4]+38;
	      
	      A[a][b][c]=A[a+1][b+3][c+4]-D[a][b][c]+B[a][b][c]*C[a][b][c];
	      
	      D[a][b][c]=31;
	      
	      A[a][b][c]=C[a][b][c]-B[a][b][c]/A[a][b][c]*D[a][b][c];
	      B[a][b][c]=C[a+4][b+5][c+4]+D[a][b][c];
	    }

    return 0;
}