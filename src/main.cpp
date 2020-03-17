#include "SFML/Graphics.hpp"
#include "fake-int.hpp"
#include "algo-analyzer.hpp"

enum {
  DEFAULT_SCREEN_WIDTH = 1280,
  DEFAULT_SCREEN_HEIGHT = 720
};

const sf::VideoMode DEFAULT_VIDEO_MODE =
    sf::VideoMode(DEFAULT_SCREEN_WIDTH, DEFAULT_SCREEN_HEIGHT);
const char DEFAULT_WINDOW_TITLE[] = "Algorithms analyzer";


int main() {
  sf::RenderWindow window(DEFAULT_VIDEO_MODE, DEFAULT_WINDOW_TITLE);
  //sf::CircleShape shape(100.f);
  //shape.setFillColor(sf::Color::Green);

  AlgoAnalyzer algo_analyzer(window);
  while (window.isOpen()) {
    sf::Event event{};

    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
          window.close();
      }
    }

    window.clear();
    algo_analyzer.Draw();
    //window.draw(shape);
    window.display();
  }

  return 0;
}