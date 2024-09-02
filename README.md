# machine-learning

# Linear Regression Gradient Descent Example

This project demonstrates a simple implementation of linear regression using gradient descent in C. The code attempts to find the best-fitting line (`y = w * x + b`) that minimizes the mean squared error given a set of training data.

## Table of Contents
- [Overview](#overview)
- [Code Structure](#code-structure)
- [Compilation](#compilation)
- [Usage](#usage)
- [Example Output](#example-output)


## Overview

This program implements a basic linear regression model using gradient descent. The goal is to minimize the cost function, which is the mean squared error between the predicted `y` values and the actual `y` values in the training data.

## Code Structure

- `train`: A 2D array that holds the training data, where each row represents a pair of `(x, y)` values.
- `rand_float`: A function that generates a random floating-point number between 0 and 1.
- `cost`: A function that calculates the mean squared error for a given weight `w` and bias `b`.
- `main`: The main function where gradient descent is applied to optimize `w` and `b`.

### Functions

- `rand_float`: Generates a random floating-point number between 0 and 1.
- `cost`: Computes the mean squared error (MSE) for given weights `w` and `b`.

### Gradient Descent

Gradient descent is performed over 100 iterations. In each iteration, the weights `w` and `b` are adjusted by computing the partial derivatives of the cost function with respect to `w` and `b`, and then updating them using a small learning rate.

## Compilation

To compile the code, use the following command:

```bash
gcc -o linear_regression main.c
