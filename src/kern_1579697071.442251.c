#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(300, 790, 60, "random");
	int **C = create_two_dim_int(60, 920, "random");
	int **A = create_two_dim_int(230, 450, "random");
	int ***D = create_three_dim_int(10, 580, 380, "random");

	for (int b = 4; b < 445; b++)
	  for (int a = 1; a < 5; a++)
	  {
	    
	     C[a][b]=D[a][b][a]/B[a][b][a]-C[a][b];
	     D[a][b][a]=A[a][b];
	    
	     D[a][b][a]=A[a][b]/C[a][b]+B[a][b][a];
	    
	     int var_a=A[a][b]+38;
	     int var_b=A[a-1][b-3]+34;
	    
	     D[a][b][a]=A[a][b]/D[a][b][a]*D[a][b][a]+C[a][b];
	     B[a][b][a]=A[a][b+5]-D[a][b][a]+B[a][b][a];
	    
	     A[a][b]=C[a][b]*B[a][b][a]-A[a][b];
	     C[a][b]=C[a-1][b-4]*D[a][b][a]+A[a][b];
	    
	     A[a][b]=D[a][b][a]/4-C[a][b]*B[a][b][a];
	     A[a][b]=D[a+1][b+1][a+1]-B[a][b][a]/C[a][b]*A[a][b];
	  }

    return 0;
}