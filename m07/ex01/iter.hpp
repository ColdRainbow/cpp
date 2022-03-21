#pragma once
#include <iostream>

int j = 0;

template <typename T1, typename T2>
void iter(T1 *arr, T2 len, void(func)(T1 const &))
{
	for (T2 i = 0; i < len; i++)
		func(arr[i]);
	j = 0;
}

template <typename T>
void ft_print(T c)
{
	std::cout << "[" << j++ << "]  " << c << std::endl;
}
