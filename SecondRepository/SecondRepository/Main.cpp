#include <iostream>
#include <time.h>

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
		if (enemy_hand_ == 2)
		{
			// 勝ち
			return 1;
		}
		// パー
		if (enemy_hand_ == 3)
		{
			// 負け
			return 2;
		}
	}
	// チョキ
	if (player_hand_ == 2)
	{
		// グー
		if (enemy_hand_ == 1)
		{
			// 負け
			return 2;
		}
		// チョキ
		if (enemy_hand_ == 2)
		{
			// あいこ
			return 3;
		}
		// パー
		if (enemy_hand_ == 3)
		{
			// 勝ち
			return 1;
		}
	}
	// パー
	if (player_hand_ == 3)
	{
		// グー
		if (enemy_hand_ == 1)
		{
			// 勝ち
			return 1;
		}
		// チョキ
		if (enemy_hand_ == 2)
		{
			// 負け
			return 2;
		}
		// パー
		if (enemy_hand_ == 3)
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
		int player_hand;
		std::cout << "じゃんけん…" << std::endl;
		std::cin >> player_hand;
		if (player_hand > 3)
		{
			std::cout << "他の数値を入力してください" << std::endl;
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