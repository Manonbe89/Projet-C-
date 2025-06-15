#pragma once

enum struct Color
{
	Brown,
	LightBlue,
	Pink,
	Orange,
	Red,
	Yellow,
	Green,
	DarkBlue,
	Size
};

constexpr inline const char* color_to_string(Color color)
{
	switch (color)
	{
	case Color::Brown: return "Brown";
	case Color::LightBlue: return "Light Blue";
	case Color::Pink: return "Pink";
	case Color::Orange: return "Orange";
	case Color::Red: return "Red";
	case Color::Yellow: return "Yellow";
	case Color::Green: return "Green";
	case Color::DarkBlue: return "Dark Blue";
	default: return "Unknown";
	}
}