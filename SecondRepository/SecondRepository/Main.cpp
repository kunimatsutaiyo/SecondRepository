#include <iostream>
#include <time.h>

int Janken(int player_hand_, int enemy_hand_)
{
	// �O�[
	if (player_hand_ == 1)
	{
		// �O�[
		if (enemy_hand_ == 1)
		{
			// ������
			return 3;
		}
		// �`���L
		if (enemy_hand_ == 2)
		{
			// ����
			return 1;
		}
		// �p�[
		if (enemy_hand_ == 3)
		{
			// ����
			return 2;
		}
	}
	// �`���L
	if (player_hand_ == 2)
	{
		// �O�[
		if (enemy_hand_ == 1)
		{
			// ����
			return 2;
		}
		// �`���L
		if (enemy_hand_ == 2)
		{
			// ������
			return 3;
		}
		// �p�[
		if (enemy_hand_ == 3)
		{
			// ����
			return 1;
		}
	}
	// �p�[
	if (player_hand_ == 3)
	{
		// �O�[
		if (enemy_hand_ == 1)
		{
			// ����
			return 1;
		}
		// �`���L
		if (enemy_hand_ == 2)
		{
			// ����
			return 2;
		}
		// �p�[
		if (enemy_hand_ == 3)
		{
			// ������
			return 3;
		}
	}
	return 0;
}

int main()
{
	std::cout << "����񂯂�Q�[���X�^�[�g�I" << std::endl;
	std::cout << "�u����񂯂�c�v�̂��Ƃɐ��l����͂��Ă�" << std::endl;
	std::cout << "��" << "1 = �O�[ , " << "2 = �`���L , " << "3 = �p�[" << std::endl;

	while (true)
	{
		int player_hand;
		std::cout << "����񂯂�c" << std::endl;
		std::cin >> player_hand;
		if (player_hand > 3)
		{
			std::cout << "���̐��l����͂��Ă�������" << std::endl;
			continue;
		}

		srand((unsigned)time(NULL));
		int enemy_hand = rand() % 3;

		int result = Janken(player_hand, enemy_hand);

		if (result == 1 ||
			result == 2)
		{
			break;
		}
	}
	
	return 0;
}