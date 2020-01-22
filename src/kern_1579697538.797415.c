#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(880, "random");
	int *B = create_one_dim_int(630, "random");
	int ***A = create_three_dim_int(270, 580, 100, "random");
	int ***E = create_three_dim_int(20, 810, 520, "random");
	int *C = create_one_dim_int(830, "random");

	for (int c = 0; c < 97; c++)
	  for (int b = 0; b < 575; b++)
	    for (int a = 0; a < 267; a++)
	    {
	      
	      B[a]=A[a][b][c]/E[a][b][c]*C[a]+23;
	      C[a]=A[a+3][b+5][c+3]+D[a]*D[a]-E[a][b][c];
	    }

    return 0;
}