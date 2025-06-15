#pragma once
#include <string>
#include <string_view>
#include <memory>
#include <list>
#include "Color.hpp"
#include "Card.hpp"
#include "Player.hpp"

struct GameState;

class Case
{
private:
	const std::string name;
public:
	explicit Case(std::string name) : name(std::move(name)) {} // name is an rvalue
	std::string_view get_name() const { return name; }
	virtual void execute(GameState&) = 0;
	virtual ~Case() = default;
};

class CaseCoffee : public Case
{
public:
	CaseCoffee() : Case("Coffee") {}
	void execute(GameState& gs) override;
};


class CaseLuck : public Case
{
private:
	std::list<std::unique_ptr<Card>>& deck;
public:
	CaseLuck(decltype(deck)& deck) : deck(deck), Case("Luck") {}
	void execute(GameState& gs) override;
};

class CaseProperty : public Case
{
private:
	Color color;
	int price;
	Player* owner = nullptr;
	bool is_owned() { return owner != nullptr; }
public:
	CaseProperty(std::string nom, int price, Color color) : color(color), Case(std::move(nom)), price(price) {}
	void execute(GameState& gs) override;
	Color get_color() const { return color; }
};



class CaseGoToCoffee : public Case
{
public:
	CaseGoToCoffee() : Case("Go to coffee") {}
	void execute(GameState& gs) override;
};


class CaseTrain : public Case
{
private:
	const std::string couleur;
public:
	CaseTrain(std::string couleur) : Case("Train " + couleur), couleur(std::move(couleur)) {}
	void execute(GameState& gs) override;
};


class CaseBigWin : public Case
{
public:
	CaseBigWin() : Case("Big Win") {}
	void execute(GameState& gs) override;
};


class CaseEntertainment : public Case
{
public:
	CaseEntertainment(std::string nom) : Case(std::move(nom)) {}
	void execute(GameState& gs) override;
};


class CaseStart : public Case
{
public:
	CaseStart() : Case("Start") {}
	void execute(GameState& gs) override;
};