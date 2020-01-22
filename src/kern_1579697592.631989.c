#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(250, "random");
	int ***D = create_three_dim_int(320, 240, 740, "random");
	int ***C = create_three_dim_int(50, 880, 330, "random");
	int ***B = create_three_dim_int(430, 260, 450, "random");
	int **E = create_two_dim_int(220, 470, "random");

	for (int d = 4; d < 450; d++)
	  for (int c = 5; c < 259; c++)
	    for (int b = 4; b < 220; b++)
	      for (int a = 4; a < 220; a++)
	      {
	        
	       E[a][b]=E[a][b+5]/D[a][b][c];
	        
	       A[a]=12;
	       A[a+5]=18;
	        
	       E[a][b]=B[a][b][c]*C[a][b][c];
	        
	       B[a][b][c]=B[a][b][c]*12;
	       C[a][b][c]=B[a+5][b+1][c]/E[a][b]*C[a][b][c];
	        
	       D[a][b][c]=B[a][b][c]*A[a]-E[a][b]/C[a][b][c];
	       A[a]=B[a-1][b-5][c-4]-D[a][b][c];
	      }

    return 0;
}