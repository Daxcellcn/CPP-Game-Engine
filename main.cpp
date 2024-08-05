#include <SFML/Graphics.hpp>
#include <vector>
#include <memory>

// Base class for game objects
class GameObject {
public:
    virtual void update(float deltaTime) = 0;
    virtual void draw(sf::RenderWindow& window) = 0;
    virtual ~GameObject() = default;
};

// A simple game object
class CircleObject : public GameObject {
public:
    CircleObject(float radius, sf::Vector2f position) {
        circle.setRadius(radius);
        circle.setPosition(position);
        circle.setFillColor(sf::Color::Green);
    }

    void update(float deltaTime) override {
        // Update logic (e.g., movement) can be added here
    }

    void draw(sf::RenderWindow& window) override {
        window.draw(circle);
    }

private:
    sf::CircleShape circle;
};

// Game engine class
class GameEngine {
public:
    GameEngine() : window(sf::VideoMode(800, 600), "Simple Game Engine") {
        // Initialize game objects
        gameObjects.push_back(std::make_unique<CircleObject>(50.f, sf::Vector2f(375, 275)));
    }

    void run() {
        sf::Clock clock;

        while (window.isOpen()) {
            sf::Time deltaTime = clock.restart();

            handleInput();
            update(deltaTime.asSeconds());
            render();
        }
    }

private:
    void handleInput() {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
    }

    void update(float deltaTime) {
        for (auto& obj : gameObjects) {
            obj->update(deltaTime);
        }
    }

    void render() {
        window.clear();
        for (const auto& obj : gameObjects) {
            obj->draw(window);
        }
        window.display();
    }

    sf::RenderWindow window;
    std::vector<std::unique_ptr<GameObject>> gameObjects;
};

int main() {
    GameEngine game;
    game.run();
    return 0;
}
