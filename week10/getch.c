#include <stdio.h>
#include <conio.h> //����ũ�μ���Ʈ�� ǥ�� C ��Ÿ�� ���̺귯��

int main(void) {
	char input_data;
	int	count = 1;
	printf("Enter chars('q','Q',or ESC to quit)\n");
	
	while (_kbhit) { //Ű����ġ���Լ�
		
		input_data = _getch(); //�Ѱ��� ���ڸ� �Է¹���
		

		//'q','Q',ESC �Է������� �����ϱ�
		if (input_data == 'q' || input_data == 'Q' || input_data == 27) {
			printf("\nExiting program...\n");
			break;
		}
		rewind(stdin);
		printf("Input %d : %c\n",count++, input_data);
		
	}

	return 0;
}