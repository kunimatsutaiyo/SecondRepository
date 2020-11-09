#include <iostream>
#include <time.h>
#include <string>

std::string PrintHand(int num_)
{
	std::string hand;
	if (num_ == 1)
	{	
		hand = "グー";
		std::cout << hand << std::endl;
	}
	if (num_ == 2)
	{
		hand = "チョキ";
		std::cout << hand << std::endl;
	}
	if (num_ == 3)
	{
		hand = "ぱー";
		std::cout << hand << std::endl;
	}
	return hand;
}

std::string PrintResult(int num_)
{
	std::string result;
	if (num_ == 1)
	{
		result = "勝ち";
		std::cout << result << std::endl;
	}
	if (num_ == 2)
	{
		result = "負け";
		std::cout << result << std::endl;
	}
	if (num_ == 3)
	{
		result = "あいこで…";
		std::cout << result << std::endl;
	}
	return result;
}

int Janken(int player_hand_, int enemy_hand_)
{
	// グー
	if (player_hand_ == 1)
	{
		// グー
		if (enemy_hand_ == 1)
		{
			// あいこ
			return 3;
		}
		// チョキ
		else if (enemy_hand_ == 2)
		{
			// 勝ち
			return 1;
		}
		// パー
		else if (enemy_hand_ == 3)
		{
			// 負け
			return 2;
		}
	}
	// チョキ
	else if (player_hand_ == 2)
	{
		// グー
		if (enemy_hand_ == 1)
		{
			// 負け
			return 2;
		}
		// チョキ
		else if (enemy_hand_ == 2)
		{
			// あいこ
			return 3;
		}
		// パー
		else if (enemy_hand_ == 3)
		{
			// 勝ち
			return 1;
		}
	}
	// パー
	else if (player_hand_ == 3)
	{
		// グー
		if (enemy_hand_ == 1)
		{
			// 勝ち
			return 1;
		}
		// チョキ
		else if (enemy_hand_ == 2)
		{
			// 負け
			return 2;
		}
		// パー
		else if (enemy_hand_ == 3)
		{
			// あいこ
			return 3;
		}
	}
	return 0;
}

int main()
{
	std::cout << "じゃんけんゲームスタート！" << std::endl;
	std::cout << "「じゃんけん…」のあとに数値を入力してね" << std::endl;
	std::cout << "※" << "1 = グー , " << "2 = チョキ , " << "3 = パー" << std::endl;

	while (true)
	{
		std::cout << "じゃんけん…" << std::endl;

		int player_hand;
		std::cin >> player_hand;
		if (player_hand > 3 ||
			player_hand < 1)
		{
			std::cout << "他の数値を入力してください" << std::endl;
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