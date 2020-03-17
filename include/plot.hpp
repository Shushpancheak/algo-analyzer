#ifndef PLOT
#define PLOT

#include "SFML/Graphics.hpp"

class Plot : public sf::Drawable, sf::Transformable {
public:
  Plot(sf::RenderWindow& window,
       size_t x_lines_count,
       size_t y_lines_count,
       sf::Vector2<double> window_dim[2]);
  ~Plot() = default;

  void draw(sf::RenderTarget& target,
            sf::RenderStates states) const override;

  void SetXY(sf::Vector2<double>& vec);
  void SetXY(sf::Vector2<double>&& vec);

  void SetScale(sf::Vector2<double>& vec);
  void SetScale(sf::Vector2<double>&& vec);

  void SetWindowDimensions(sf::Vector2<double> window_dim[]);

  // Refreshes all graphic elements.
  void Refresh();

private:
  sf::Vector2<double> scale_;

  std::vector<sf::Text> x_labels_;
  std::vector<sf::Text> y_labels_;
  sf::VertexArray x_lines_;
  sf::VertexArray y_lines_;
  sf::RectangleShape background_;
  sf::RenderWindow& window_;
};

#endif