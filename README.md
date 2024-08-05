# CPP-Game-Engine

A simple yet illustrative C++ game engine built using the SFML (Simple and Fast Multimedia Library). This project serves as an introduction to core game engine concepts including rendering, user input handling, and game object management.

# Features

Rendering: Displays graphical objects on the screen using SFML’s graphics module.

Game Object Management: Allows for the creation and manipulation of game objects. Includes a sample game object, CircleObject, demonstrating basic object drawing and updating.

User Input Handling: Captures and processes basic input events to manage window operations.

Game Loop: Implements a standard game loop with update and render cycles.

# Components

GameObject Class: Abstract base class for game objects with methods for updating and rendering.

CircleObject Class: Concrete example of a game object that renders a circle on the screen.

GameEngine Class: Manages the game loop, handles input, updates game objects, and renders them.

# Getting Started

Prerequisites

SFML: Make sure you have SFML installed and properly configured on your system. Follow the installation instructions on the SFML website.

# Building the Project

To build the project, use the following command (adjust according to your system and compiler):

g++ -o game_engine main.cpp -lsfml-graphics -lsfml-window -lsfml-system

# Running the Game Engine

After building the project, run the executable:

./game_engine

You should see a window displaying a green circle. The engine is currently set up to manage and render this basic shape.

# Contributing

Feel free to contribute by opening issues or submitting pull requests. Contributions are welcome to enhance the features and functionality of this basic game engine.

# License

This project is licensed under the MIT License - see the LICENSE file for details.

# Acknowledgements

SFML for providing a powerful and easy-to-use multimedia library.
