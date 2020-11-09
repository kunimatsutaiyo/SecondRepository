#include <iostream>
#include <time.h>
#include <string>

std::string PrintHand(int num_)
{
	std::string hand;
	if (num_ == 1)
	{	
		hand = "�O�[";
		std::cout << hand << std::endl;
	}
	if (num_ == 2)
	{
		hand = "�`���L";
		std::cout << hand << std::endl;
	}
	if (num_ == 3)
	{
		hand = "�ρ[";
		std::cout << hand << std::endl;
	}
	return hand;
}

std::string PrintResult(int num_)
{
	std::string result;
	if (num_ == 1)
	{
		result = "����";
		std::cout << result << std::endl;
	}
	if (num_ == 2)
	{
		result = "����";
		std::cout << result << std::endl;
	}
	if (num_ == 3)
	{
		result = "�������Łc";
		std::cout << result << std::endl;
	}
	return result;
}

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
		else if (enemy_hand_ == 2)
		{
			// ����
			return 1;
		}
		// �p�[
		else if (enemy_hand_ == 3)
		{
			// ����
			return 2;
		}
	}
	// �`���L
	else if (player_hand_ == 2)
	{
		// �O�[
		if (enemy_hand_ == 1)
		{
			// ����
			return 2;
		}
		// �`���L
		else if (enemy_hand_ == 2)
		{
			// ������
			return 3;
		}
		// �p�[
		else if (enemy_hand_ == 3)
		{
			// ����
			return 1;
		}
	}
	// �p�[
	else if (player_hand_ == 3)
	{
		// �O�[
		if (enemy_hand_ == 1)
		{
			// ����
			return 1;
		}
		// �`���L
		else if (enemy_hand_ == 2)
		{
			// ����
			return 2;
		}
		// �p�[
		else if (enemy_hand_ == 3)
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
		std::cout << "����񂯂�c" << std::endl;

		int player_hand;
		std::cin >> player_hand;
		if (player_hand > 3 ||
			player_hand < 1)
		{
			std::cout << "���̐��l����͂��Ă�������" << std::endl;
			continue;
		}
		std::cout << "player_hand = " << PrintHand(player_hand) << std::endl;

		srand((unsigned)time(NULL));
		int enemy_hand = rand() % 3;
		std::cout << "enemy_hand = " << PrintHand(enemy_hand) << std::endl;

		int result = Janken(player_hand, enemy_hand);
		PrintResult(result);

		if (result == 1 ||
			result == 2)
		{
			break;
		}
	}
	
	return 0;
}