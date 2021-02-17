/*Program : ComputerMove7x7.c
* Deskripsi : Pergerakan Komputer pada papan 7x7.
* Nama : Fadhil Muhammad
* tanggal/ versi : 06 - Februari - 2021 / 1
*/

void computer_move_7X7()
{
	int i,j;
	// Pengecekan Baris

	// Jika papan 1, 2, dan, 4 adalah 'X' atau 'O' maka papan 3 atau 5 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][0]=='X'&& matrix[i][1]=='X')||(matrix[i][1]=='X'&& matrix[i][3]=='X')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][0]=='O'&& matrix[i][1]=='O')||(matrix[i][1]=='O'&& matrix[i][3]=='O')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	// Jika papan 1, 2, dan, 5 adalah 'X' atau 'O' maka papan 3 atau 4 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][0]=='X'&& matrix[i][1]=='X')||(matrix[i][1]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][0]=='O'&& matrix[i][1]=='O')||(matrix[i][1]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Jika papan 1, 2, dan, 3 adalah 'X' atau 'O' maka papan 4 atau 5 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][0]=='X'&& matrix[i][1]=='X')||(matrix[i][1]=='X'&& matrix[i][2]=='X')){									
			if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][0]=='O'&& matrix[i][1]=='O')||(matrix[i][1]=='O'&& matrix[i][2]=='O')){									
			if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	// Jika papan 1, 3, dan, 4 adalah 'X' atau 'O' maka papan 2 atau 5 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][0]=='X'&& matrix[i][2]=='X')||(matrix[i][2]=='X'&& matrix[i][3]=='X')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][0]=='O'&& matrix[i][2]=='O')||(matrix[i][2]=='O'&& matrix[i][3]=='O')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	// Jika papan 1, 3, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 4 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][0]=='X'&& matrix[i][2]=='X')||(matrix[i][2]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][0]=='O'&& matrix[i][2]=='O')||(matrix[i][2]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Jika papan 1, 4, dan, 5 adalah 'X' atau 'O' maka papan 2 atau 3 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][0]=='X'&& matrix[i][3]=='X')||(matrix[i][3]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 1, 4, dan, 5 adalah 'X' atau 'O' maka papan 2 atau 3 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][0]=='O'&& matrix[i][3]=='O')||(matrix[i][3]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}
	

	for(i=0;i<7;i++){

		if((matrix[i][1]=='X'&& matrix[i][2]=='X')||(matrix[i][2]=='X'&& matrix[i][3]=='X')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	// Jika papan 2, 3, dan, 4 adalah 'X' atau 'O' maka papan 1 atau 5 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][1]=='O'&& matrix[i][2]=='O')||(matrix[i][2]=='O'&& matrix[i][3]=='O')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][1]=='X'&& matrix[i][2]=='X')||(matrix[i][2]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Jika papan 2, 3, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 4 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][1]=='O'&& matrix[i][2]=='O')||(matrix[i][2]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][1]=='X'&& matrix[i][3]=='X')||(matrix[i][3]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 2, 4, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 3 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][1]=='O'&& matrix[i][3]=='O')||(matrix[i][3]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}
	
	for(i=0;i<7;i++){

		if((matrix[i][2]=='X'&& matrix[i][3]=='X')||(matrix[i][3]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
		}
	}

	// Jika papan 3, 4, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 2 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][2]=='O'&& matrix[i][3]=='O')||(matrix[i][3]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][2]=='X'&& matrix[i][4]=='X')||(matrix[i][4]=='X'&& matrix[i][5]=='X')){									
			if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
			else if(matrix[i][6]==' '){
				matrix[i][6]='O';
				return;
			}
		}
	}

	// Jika papan 3, 5, dan, 6 adalah 'X' atau 'O' maka papan 4 atau 7 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][2]=='O'&& matrix[i][4]=='O')||(matrix[i][4]=='O'&& matrix[i][5]=='O')){									
			if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
			else if(matrix[i][6]==' '){
				matrix[i][6]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][3]=='X'&& matrix[i][4]=='X')||(matrix[i][4]=='X'&& matrix[i][6]=='X')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][5]==' '){
				matrix[i][5]='O';
				return;
			}
		}
	}

	// Jika papan 4, 5, dan, 7 adalah 'X' atau 'O' maka papan 3 atau 6 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][3]=='O'&& matrix[i][4]=='O')||(matrix[i][4]=='O'&& matrix[i][6]=='O')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][5]==' '){
				matrix[i][5]='O';
				return;
			}
		}
	}

	// Jika papan 3, 4, dan, 5 adalah 'X' atau 'O' maka papan 6 atau 7 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][2]=='X'&& matrix[i][3]=='X')||(matrix[i][3]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][5]==' '){
				matrix[i][5]='O';
				return;
			}
			else if(matrix[i][6]==' '){
				matrix[i][6]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][2]=='O'&& matrix[i][3]=='O')||(matrix[i][3]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][5]==' '){
				matrix[i][5]='O';
				return;
			}
			else if(matrix[i][6]==' '){
				matrix[i][6]='O';
				return;
			}
		}
	}
	// Pengecekan baris

	// Jika papan 1 dan 2 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][0]=='X'&& matrix[i][1]=='X'){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 3 dan 4 adalah 'X' maka papan 2 atau 5 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][2]=='X'&& matrix[i][3]=='X'){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}
	
	// Jika papan 2 dan 3 adalah 'X' maka papan 1 atau 4 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][1]=='X'&& matrix[i][2]=='X'){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Jika papan 4 dan 5 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][3]=='X'&& matrix[i][4]=='X'){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 1 dan 3 adalah 'X' maka papan 2 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][0]=='X'&& matrix[i][2]=='X'){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
		}
	}

	// Jika papan 2 dan 4 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][1]=='X'&& matrix[i][3]=='X'){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 3 dan 5 adalah 'X' maka papan 4 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][2]=='X'&& matrix[i][4]=='X'){									
			if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Jika papan 4 dan 5 adalah 'X' maka papan 6 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][3]=='X'&& matrix[i][4]=='X'){									
			if(matrix[i][5]==' '){
				matrix[i][5]='O';
				return;
			}
		}
	}

	// Jika papan 5 dan 6 adalah 'X' maka papan 7 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][4]=='X'&& matrix[i][5]=='X'){									
			if(matrix[i][6]==' '){
				matrix[i][6]='O';
				return;
			}
		}
	}

	// Jika papan 5 dan 7 adalah 'X' maka papan 6 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][4]=='X'&& matrix[i][6]=='X'){									
			if(matrix[i][5]==' '){
				matrix[i][5]='O';
				return;
			}
		}
	}

	// Pengecekan kolom

	// // Jika papan 1, 2, dan 3 adalah 'X' atau 'O' maka papan 2 atau 5 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[0][i]=='X'&& matrix[1][i]=='X')||(matrix[1][i]=='X'&& matrix[3][i]=='X')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[0][i]=='O'&& matrix[1][i]=='O')||(matrix[1][i]=='O'&& matrix[3][i]=='O')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// // Jika papan 1, 2, dan 5 adalah 'X' atau 'O' maka papan 3 atau 4 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[0][i]=='X'&& matrix[1][i]=='X')||(matrix[1][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[0][i]=='O'&& matrix[1][i]=='O')||(matrix[1][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	// // Jika papan 1, 2, dan 3 adalah 'X' atau 'O' maka papan 4 atau 5 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[0][i]=='X'&& matrix[1][i]=='X')||(matrix[1][i]=='X'&& matrix[2][i]=='X')){									
			if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[0][i]=='O'&& matrix[1][i]=='O')||(matrix[1][i]=='O'&& matrix[2][i]=='O')){									
			if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// // Jika papan 1, 3, dan 4 adalah 'X' atau 'O' maka papan 2 atau 5 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[0][i]=='X'&& matrix[2][i]=='X')||(matrix[2][i]=='X'&& matrix[3][i]=='X')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[0][i]=='O'&& matrix[2][i]=='O')||(matrix[2][i]=='O'&& matrix[3][i]=='O')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// // Jika papan 1, 3, dan 5 adalah 'X' atau 'O' maka papan 2 atau 4 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[0][i]=='X'&& matrix[2][i]=='X')||(matrix[2][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[0][i]=='O'&& matrix[2][i]=='O')||(matrix[2][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	// // Jika papan 1, 4, dan 5 adalah 'X' atau 'O' maka papan 2 atau 3 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[0][i]=='X'&& matrix[3][i]=='X')||(matrix[3][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[0][i]=='O'&& matrix[3][i]=='O')||(matrix[3][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	// // Jika papan 2, 3, dan 4 adalah 'X' atau 'O' maka papan 1 atau 5 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[1][i]=='X'&& matrix[2][i]=='X')||(matrix[2][i]=='X'&& matrix[3][i]=='X')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[1][i]=='O'&& matrix[2][i]=='O')||(matrix[2][i]=='O'&& matrix[3][i]=='O')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// // Jika papan 2, 3, dan 5 adalah 'X' atau 'O' maka papan 1 atau 4 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[1][i]=='X'&& matrix[2][i]=='X')||(matrix[2][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[1][i]=='O'&& matrix[2][i]=='O')||(matrix[2][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	// // Jika papan 2, 4, dan 5 adalah 'X' atau 'O' maka papan 1 atau 3 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[1][i]=='X'&& matrix[3][i]=='X')||(matrix[3][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[1][i]=='O'&& matrix[3][i]=='O')||(matrix[3][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	// // Jika papan 3, 4, dan 5 adalah 'X' atau 'O' maka papan 1 atau 2 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[2][i]=='X'&& matrix[3][i]=='X')||(matrix[3][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[2][i]=='O'&& matrix[3][i]=='O')||(matrix[3][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
		}
	}

	// // Jika papan 3, 4, dan 5 adalah 'X' atau 'O' maka papan 6 atau 7 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[2][i]=='X'&& matrix[3][i]=='X')||(matrix[3][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[5][i]==' '){
				matrix[5][i]='O';
				return;
			}
			else if(matrix[6][i]==' '){
				matrix[6][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[2][i]=='O'&& matrix[3][i]=='O')||(matrix[3][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[5][i]==' '){
				matrix[5][i]='O';
				return;
			}
			else if(matrix[6][i]==' '){
				matrix[6][i]='O';
				return;
			}
		}
	}

	// // Jika papan 4, 5, dan 7 adalah 'X' atau 'O' maka papan 3 atau 6 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[3][i]=='X'&& matrix[4][i]=='X')||(matrix[4][i]=='X'&& matrix[6][i]=='X')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[5][i]==' '){
				matrix[5][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[3][i]=='O'&& matrix[4][i]=='O')||(matrix[4][i]=='O'&& matrix[6][i]=='O')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[5][i]==' '){
				matrix[5][i]='O';
				return;
			}
		}
	}

	// // Jika papan 4, 5, dan 6 adalah 'X' atau 'O' maka papan 6 atau 7 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[3][i]=='X'&& matrix[4][i]=='X')||(matrix[4][i]=='X'&& matrix[5][i]=='X')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[6][i]==' '){
				matrix[6][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[3][i]=='O'&& matrix[4][i]=='O')||(matrix[4][i]=='O'&& matrix[5][i]=='O')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[6][i]==' '){
				matrix[6][i]='O';
				return;
			}
		}
	}

	// Pengecekan Kolom

	// Jika papan 1 dan 2 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<7;i++){
		if(matrix[0][i]=='X'&& matrix[1][i]=='X'){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	// Jika papan 3 dan 4 adalah 'X' maka papan 2 atau 5 adalah 'O'
	for(i=0;i<7;i++){
		if(matrix[2][i]=='X'&& matrix[3][i]=='X'){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// Jika papan 2 dan 3 adalah 'X' maka papan 1 atau 4 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[1][i]=='X'&& matrix[2][i]=='X'){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}
	
	// Jika papan 4 dan 5 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<7;i++){
		if(matrix[3][i]=='X'&& matrix[4][i]=='X'){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	// Jika papan 1 dan 3 adalah 'X' maka papan 2 adalah 'O'
	for(i=0;i<7;i++){
		if(matrix[0][i]=='X'&& matrix[2][i]=='X'){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
		}
	}
	
	// Jika papan 2 dan 4 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<7;i++){
		if(matrix[1][i]=='X'&& matrix[3][i]=='X'){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}
	
	// Jika papan 3 dan 5 adalah 'X' maka papan 4 adalah 'O'
	for(i=0;i<7;i++){
		if(matrix[2][i]=='X'&& matrix[4][i]=='X'){									
			if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	// Jika papan 4 dan 5 adalah 'X' maka papan 6 adalah 'O'
	for(i=0;i<7;i++){
		if(matrix[3][i]=='X'&& matrix[4][i]=='X'){									
			if(matrix[5][i]==' '){
				matrix[5][i]='O';
				return;
			}
		}
	}

	// Jika papan 5 dan 6 adalah 'X' maka papan 7 adalah 'O'
	for(i=0;i<7;i++){
		if(matrix[4][i]=='X'&& matrix[5][i]=='X'){									
			if(matrix[6][i]==' '){
				matrix[6][i]='O';
				return;
			}
		}
	}

	// Jika papan 5 dan 7 adalah 'X' maka papan 6 adalah 'O'
	for(i=0;i<7;i++){
		if(matrix[4][i]=='X'&& matrix[6][i]=='X'){									
			if(matrix[5][i]==' '){
				matrix[5][i]='O';
				return;
			}
		}
	}

	// Pengecekan Diagonal

	if(matrix[0][0]=='X'&& matrix[1][1]=='X'){

		if(matrix[2][2]==' '){
			matrix[2][2]='O';
			return;
		}
	}

	if(matrix[0][0]=='X'&& matrix[2][2]=='X'){

		if(matrix[1][1]==' '){
			matrix[1][1]='O';
			return;
		}
	}

	if(matrix[3][3]=='X'&& matrix[1][1]=='X'){

		if(matrix[2][2]==' '){
			matrix[2][2]='O';
			return;
		}
	}

	if(matrix[2][2]=='X'&& matrix[4][4]=='X'){

		if(matrix[3][3]==' '){
			matrix[3][3]='O';
			return;
		}
	}

	if(matrix[1][1]=='X'&& matrix[2][2]=='X'){

		if(matrix[0][0]==' '){
			matrix[0][0]='O';
			return;
		}
		else if(matrix[3][3]==' '){
			matrix[3][3]='O';
			return;
		}
	}

	if(matrix[2][2]=='X'&& matrix[3][3]=='X'){

		if(matrix[1][1]==' '){
			matrix[1][1]='O';
			return;
		}
		else if(matrix[4][4]==' '){
			matrix[4][4]='O';
			return;
		}

	}

	if(matrix[0][4]=='X'&& matrix[1][3]=='X'){

		if(matrix[2][2]==' '){
			matrix[2][2]='O';
			return;
		}
	}

	if(matrix[0][4]=='X'&& matrix[2][2]=='X'){

		if(matrix[1][3]==' '){
			matrix[1][3]='O';
			return;
		}
	}

	if(matrix[3][1]=='X'&& matrix[1][3]=='X'){

		if(matrix[2][2]==' '){
			matrix[2][2]='O';
			return;
		}
	}

	if(matrix[2][2]=='X'&& matrix[4][0]=='X'){

		if(matrix[3][1]==' '){
			matrix[3][1]='O';
			return;
		}
	}

	if(matrix[2][2]=='X'&& matrix[3][1]=='X'){

		if(matrix[1][3]==' '){
			matrix[1][3]='O';
			return;
		}
		else if(matrix[4][0]==' '){
			matrix[4][0]=='O';
			return;
		}
	}

	if(matrix[1][3]=='X'&& matrix[2][2]=='X'){

		if(matrix[0][4]==' '){
			matrix[0][4]='O';
			return;
		}
		else if(matrix[3][1]==' '){
			matrix[3][1]='O';
			return;
		}

	}
	
	if(matrix[1][5]=='X'&& matrix[2][4]=='X'){
		if(matrix[0][6]==' '){
			matrix[0][6]='O';
			return;
		}
	}

	if(matrix[2][5]=='X'&& matrix[3][4]=='X'){
		if(matrix[1][6]==' '){
			matrix[1][6]='O';
			return;
		}
	}

	if(matrix[3][5]=='X'&& matrix[4][4]=='X'){
		if(matrix[2][6]==' '){
			matrix[2][6]='O';
			return;
		}
	}

	if(matrix[3][6]=='X'&& matrix[4][5]=='X'){
		if(matrix[5][4]==' '){
			matrix[5][4]='O';
			return;
		}
	}
	
	if(matrix[4][6]=='X'&& matrix[5][5]=='X'){
		if(matrix[5][5]==' '){
			matrix[5][5]='O';
			return;
		}
	}

	if(matrix[0][4]=='X'&& matrix[1][5]=='X'){
		if(matrix[2][6]==' '){
			matrix[2][6]='O';
			return;
		}
	}

	if(matrix[1][4]=='X'&& matrix[2][5]=='X'){
		if(matrix[3][6]==' '){
			matrix[3][6]='O';
			return;
		}
	}

	if(matrix[3][4]=='X'&& matrix[4][5]=='X'){
		if(matrix[5][6]==' '){
			matrix[5][6]='O';
			return;
		}
	}

	if(matrix[4][4]=='X'&& matrix[5][5]=='X'){
		if(matrix[6][6]==' '){
			matrix[6][6]='O';
			return;
		}
	}

	if(matrix[4][2]=='X'&& matrix[5][1]=='X'){
		if(matrix[6][0]==' '){
			matrix[6][0]='O';
			return;
		}
	}

	if(matrix[4][0]=='X'&& matrix[5][1]=='X'){
		if(matrix[6][2]==' '){
			matrix[6][2]='O';
			return;
		}
	}

	if(matrix[4][1]=='X'&& matrix[5][2]=='X'){
		if(matrix[6][3]==' '){
			matrix[6][3]='O';
			return;
		}
	}

	if(matrix[4][3]=='X'&& matrix[5][2]=='X'){
		if(matrix[6][1]==' '){
			matrix[6][1]='O';
			return;
		}
	}

	if(matrix[4][2]=='X'&& matrix[5][3]=='X'){
		if(matrix[6][4]==' '){
			matrix[6][4]='O';
			return;
		}
	}

	if(matrix[4][4]=='X'&& matrix[5][3]=='X'){
		if(matrix[6][2]==' '){
			matrix[6][2]='O';
			return;
		}
	}

	if(matrix[4][3]=='X'&& matrix[5][4]=='X'){
		if(matrix[6][5]==' '){
			matrix[6][5]='O';
			return;
		}
	}

	if(matrix[4][5]=='X'&& matrix[5][4]=='X'){
		if(matrix[6][3]==' '){
			matrix[6][3]='O';
			return;
		}
	}

	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			if(matrix[i][j]=='X'){

				if(matrix[i][--j]==' '){
					matrix[i][j]='O';
					return;
				}

				else if(matrix[i][++j]==' '){
					matrix[i][j]='O';
					return;
				}
				else if(matrix[++i][j]==' '){
					matrix[i][j]='O';
					return;
				}

				else if(matrix[--i][j]==' '){
					matrix[i][j]='O';
					return;
				}

			}
		}
	}

}