#include <algo-analyzer.hpp>


AlgoAnalyzer::AlgoAnalyzer(sf::RenderWindow& window)
    : plot(window) {}


void AlgoAnalyzer::Draw() {
  plot.Draw();
}
