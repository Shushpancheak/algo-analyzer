#ifndef ALGO_ANALYZER
#define ALGO_ANALYZER

#include <SFML/Graphics.hpp>
#include "fake-int.hpp"
#include "plot.hpp"


class AlgoAnalyzer {
public:
  AlgoAnalyzer(sf::RenderWindow& window);
  ~AlgoAnalyzer() = default;

  inline void Draw();

private:
  Plot plot;
};

#endif