// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/PuzzleFunctions.h"

TMap<int32, int32> GetPuzzleLayout()
{
	/*int knobs = 4;
	int curr = 0;
	std::map<int, std::vector<int>> layout;

	std::random_device rd;
	std::mt19937 eng(rd());

	for (int i = 0; i < 3; i++)
	{
		std::uniform_int_distribution<> distr(1, knobs);
		curr = distr(eng);
		knobs -= curr;

		for (int j = 0; j < curr; j++)
		{
			layout[i] = std::vector<int>();
		}
	}*/
	TMap<int32, int32> layout;
	layout[0] = (1);
	layout[1] = (5);
	layout[2] = (3);
	//layout[0].Insert(1);
	//layout[0].Insert(7);
	//layout[1].Insert(8);
	//layout[1].Insert(5);
	//layout[2].Insert(9);
	//layout[2].Insert(3);

	return layout;
}