# Single Neuron Implementation in C

This project implements a simple single neuron model in C, demonstrating basic concepts of machine learning, particularly linear regression. The neuron learns to fit a line to a given dataset through gradient descent.

## Overview

The model uses a basic dataset that represents a linear relationship between two variables. The goal is to find the optimal weights (`w`) and bias (`b`) for the linear equation:

\[ y = wx + b \]

where:
- `x` is the input feature.
- `y` is the target output.

## Dataset

The dataset used for training consists of the following points:

| x | y |
|---|---|
| 0 | 0 |
| 1 | 2 |
| 2 | 4 |
| 3 | 6 |
| 4 | 8 |

This dataset represents a perfect linear relationship where `y` is double the value of `x`.

## Features

- Random initialization of weights and biases.
- Calculation of cost function (mean squared error).
- Gradient descent for optimizing weights and bias.
- Iterative updates to minimize the cost function.

## Installation

To compile and run the project, ensure you have a C compiler installed. You can use `gcc` or any other C compiler.

1. Clone the repository (if applicable):
2. gh repo clone artyviz/machine-learning

3. Compile the program:gcc -o single_neuron single_neuron.c
Usage
Run the compiled program:./single_neuron

The program will output the initial cost and iterate through 100 steps of gradient descent, printing the cost, weights, and bias at each iteration. At the end of the training, it will display the final weights and bias.

#OUTPUT

Initial cost: 7.624557
Iteration 0: cost = 7.624557, w = 0.085921, b = 4.342233
...
Iteration 99: cost = 6.007603, w = 0.432014, b = 4.175984
--------------------
Final weights: w = 0.432014, b = 4.175984

Conclusion
This simple implementation serves as a foundational example of how a neuron can be trained to predict values based on a linear relationship. It can be extended with more complex datasets and features.

License
This project is licensed under the MIT License - see the LICENSE file for details.

Author: Farhan

